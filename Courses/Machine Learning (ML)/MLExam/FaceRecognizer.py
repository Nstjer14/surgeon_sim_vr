from keras.preprocessing.image import ImageDataGenerator, array_to_img, img_to_array, load_img
from keras.models import Sequential
from keras.layers import Conv2D, MaxPooling2D
from keras.layers import Activation, Dropout, Flatten, Dense
from keras.optimizers import Adam
import matplotlib.pyplot as plt
from keras.regularizers import l1, l2, l1_l2
from keras import regularizers

optimizer = Adam(lr=0.0001)

model = Sequential() #we will use this model for fitting
model.add(Conv2D(32, (3, 3), input_shape=(64, 64, 3), bias_regularizer=l2(0.01), kernel_regularizer=l2(0.01))) #first convolutional layer, the input layer
model.add(Activation('relu')) #activation layer, we use ReLU
model.add(MaxPooling2D(pool_size=(2, 2))) #features, edges in 2x2 squares

#model.add(Conv2D(32, (3, 3)))
#model.add(Activation('relu'))
#model.add(MaxPooling2D(pool_size=(2, 2)))

model.add(Conv2D(64, (3, 3), bias_regularizer=l2(0.01), kernel_regularizer=l2(0.01)))
model.add(Activation('relu'))
model.add(MaxPooling2D(pool_size=(2, 2)))

model.add(Conv2D(128, (3, 3), bias_regularizer=l2(0.01), kernel_regularizer=l2(0.01)))
model.add(Activation('relu'))
model.add(MaxPooling2D(pool_size=(2, 2)))

model.add(Conv2D(256, (3, 3), bias_regularizer=l2(0.01), kernel_regularizer=l2(0.01)))
model.add(Activation('relu'))
model.add(MaxPooling2D(pool_size=(2, 2)))

model.add(Flatten())  # this converts our 3D feature maps to 1D feature vectors
model.add(Dense(256, bias_regularizer=l2(0.01), kernel_regularizer=l2(0.01)))
model.add(Activation('relu'))
model.add(Dropout(0.5))
model.add(Dense(5))
model.add(Activation('softmax'))

model.compile(loss='categorical_crossentropy',
              optimizer=optimizer,
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

# this is the augmentation configuration we will use for testing:
# only rescaling
test_datagen = ImageDataGenerator(rescale=1./255)

# this generator will read pictures found in subfolders for our training images
train_generator = train_datagen.flow_from_directory(  # default size is 256x256
        'D:/Stuff/MNIST/Faces',  # this is the target directory
        batch_size=batch_size,  # default class_mode is categorical, class names will be inferred from subfolder names
        target_size=(64,64))

# this is a similar generator, for validation data
validation_generator = test_datagen.flow_from_directory(
        'D:/Stuff/MNIST/FaceValCropped',
        batch_size=batch_size,
        target_size=(64,64))

# here we begin training our model
history = model.fit_generator(
    train_generator,
    steps_per_epoch=2048 // batch_size,  # integer division (casts to int)
    epochs=50,
    validation_data=validation_generator,
    validation_steps=1024 // batch_size,
    verbose=2)

print(history.history.keys())

plt.plot(history.history['acc'])
plt.plot(history.history['val_acc'])
plt.title('model accuracy')
plt.ylabel('accuracy')
plt.xlabel('epoch')
plt.legend(['train', 'test'], loc='upper left')
plt.show()

model.save_weights('FaceWeights.h5')  # here we save our weights as a h5 file'
