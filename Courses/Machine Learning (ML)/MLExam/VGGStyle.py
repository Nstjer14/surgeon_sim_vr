# another type of image classifier, this one modelled after VGG16 but cannot use more layers than the previous one

from keras.preprocessing.image import ImageDataGenerator, array_to_img, img_to_array, load_img
from keras.models import Sequential
from keras.layers import Conv2D, MaxPooling2D
from keras.layers import Activation, Dropout, Flatten, Dense, ZeroPadding2D
from keras.optimizers import Adam

optimizer = Adam()

model = Sequential()

model.add(ZeroPadding2D((1, 1), input_shape=(256, 256, 3)))
model.add(Conv2D(32, (3, 3), activation='relu'))
model.add(ZeroPadding2D((1, 1)))
model.add(Conv2D(32, (3, 3), activation='relu'))
model.add(ZeroPadding2D((1, 1)))
model.add(MaxPooling2D(pool_size=(2, 2), strides=(2,2)))

model.add(ZeroPadding2D((1, 1)))
model.add(Conv2D(64, (3, 3), activation='relu'))
model.add(ZeroPadding2D((1, 1)))
model.add(Conv2D(64, (3, 3), activation='relu'))
model.add(ZeroPadding2D((1, 1)))
model.add(MaxPooling2D(pool_size=(2, 2), strides=(2,2)))

model.add(Flatten())  # this converts our 3D feature maps to 1D feature vectors
model.add(Dense(64))
model.add(Activation('relu'))
model.add(Dropout(0.5))
model.add(Dense(64))
model.add(Activation('relu'))
model.add(Dropout(0.5))
model.add(Dense(8))
model.add(Activation('softmax'))

model.compile(loss='categorical_crossentropy',
              optimizer='rmsprop',
              metrics=['accuracy'])

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

test_datagen = ImageDataGenerator(rescale=1./255)

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

model.save_weights('vggstyle.h5')  # here we save our weights as a h5 file'
