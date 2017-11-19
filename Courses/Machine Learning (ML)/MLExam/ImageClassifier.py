from keras.preprocessing.image import ImageDataGenerator, array_to_img, img_to_array, load_img
from keras.models import Sequential
from keras.layers import Conv2D, MaxPooling2D
from keras.layers import Activation, Dropout, Flatten, Dense
from keras.optimizers import Adam

optimizer = Adam()

datagen = ImageDataGenerator(
    rotation_range=40, #rotate randomly 0 to 40 degrees
    width_shift_range=0.2, #fraction of total width to translate pictures horizontally
    height_shift_range=0.2,
    rescale=1./255, #value to multiply image with before any other processing, targets 0-1 by scaling with a 1/255 factor
    shear_range=0.2, #applies shear transformations (wiki it)
    zoom_range=0.2, #randomly zooming inside pictures
    horizontal_flip=True, #randomly flipping half horizontally, since we make no assumptions of horizontal assymetry
    fill_mode='nearest') #how does the gen fill in newly generated pixels

new_shape = (256,256,3)

img = load_img('D:/Stuff/MNIST/event_img/badminton/Easy_Close_badminton_45.jpg')
x = img_to_array(img)  # this is a Numpy array with shape 3,x,y
x = x.reshape((1,) + x.shape)  # this is a Numpy array with shape 1,3,x,y

#now we want to generate batches of this image
#we also save them so we can see them
i = 0
for batch in datagen.flow(x, batch_size=1, save_to_dir='preview',save_prefix='Badminton',save_format='.jpeg'):
    i+=1
    if i > 20:
        break #flow loops infinitely, so we have to break it with this

#EVERYTHING BELOW HERE IS DIRECTLY CONCERNED WITH THE ACTUAL PROJECT
#so, since we have very little data, we are very concerned with overfitting
#we have to focus on how much data our model is allowed to store
#primarily layers and size, but also regularization (L1 or L2)
#also dropout, which prevents a layer from seeing the exact same pattern

model = Sequential() #we will use this model for fitting
model.add(Conv2D(32, (3, 3), input_shape=(256, 256, 3))) #first convolutional layer, the input layer
model.add(Activation('relu')) #activation layer, we use ReLU
model.add(MaxPooling2D(pool_size=(2, 2))) #features, edges in 2x2 squares

model.add(Conv2D(32, (3, 3)))
model.add(Activation('relu'))
model.add(MaxPooling2D(pool_size=(2, 2)))

model.add(Conv2D(64, (3, 3)))
model.add(Activation('relu'))
model.add(MaxPooling2D(pool_size=(2, 2)))

model.add(Conv2D(128, (3, 3)))
model.add(Activation('relu'))
model.add(MaxPooling2D(pool_size=(2, 2)))

model.add(Flatten())  # this converts our 3D feature maps to 1D feature vectors
model.add(Dense(128))
model.add(Activation('relu'))
model.add(Dropout(0.5))
model.add(Dense(8))
model.add(Activation('softmax'))

model.compile(loss='categorical_crossentropy',
              optimizer=optimizer,
              metrics=['accuracy'])

# now for our data
# flow_from_directory is much like flow, only it uses.. directories

batch_size = 32

# we will start off by using a slightly smaller augmentation conf for our training data
train_datagen = ImageDataGenerator(
        rescale=1./255,
        shear_range=0.2,
        zoom_range=0.2,
        width_shift_range=0.2,
        height_shift_range=0.2,
        rotation_range=40,
        horizontal_flip=True)

# this is the augmentation configuration we will use for testing:
# only rescaling
test_datagen = ImageDataGenerator(rescale=1./255)

# this generator will read pictures found in subfolders for our training images
train_generator = train_datagen.flow_from_directory(  # default size is 256x256
        'D:/Stuff/MNIST/event_img',  # this is the target directory
        batch_size=batch_size)  # default class_mode is categorical, class names will be inferred from subfolder names

# this is a similar generator, for validation data
validation_generator = test_datagen.flow_from_directory(
        'D:/Stuff/MNIST/validation',
        batch_size=batch_size)

# here we begin training our model
model.fit_generator(
    train_generator,
    steps_per_epoch=2000 // batch_size,  # integer division (casts to int)
    epochs=50,
    validation_data=validation_generator,
    validation_steps=800 // batch_size)

model.save_weights('RegularLongDouble.h5')  # here we save our weights as a h5 file'
