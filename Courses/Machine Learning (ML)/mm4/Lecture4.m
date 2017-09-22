%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Group ID : 743
% Members : Frederik Falk, Oliver Gyldenberg Hjermitslev, Atanas Nikolov,
% Nicklas Haagh Christensen, Niclas Hjorth Stjernholm
% Date : 22-09-17
% Lecture: 3 Parametric and nonparametric methods
% Dependencies: netlab.
% Matlab version: 2017a
% Functionality: Chooses three classes from a 10 class database and reduces
% the dimensions to 2 using the PCA method (Principal component analysis).
%Then performs a 3 class classification of the
% classes based on the generated 2 dimensional data.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

load Data/mnist_all; %Load All data

%Using the PCA method

%Assignment 1 : from the 10-class database, choose three classes (5, 6 and
%8) and then reduce dimension to 2:

%Getting training data from dataset
trainingdata = double([train5;train6;train8]); 
gnd = [ones(length(train5),1)*5;ones(length(train6),1)*6;ones(length(train8),1)*8];

options = [];
options.Fisherface = 1; % Fisherface approach (default = 0)

[eigvalue, eigvector] = pca(trainingdata,2); %returns eigenvalues and -vectors. 
%These are used for reducing the dimensions of the test data.


%Reducing dimensions of training data / Projecting
Y = trainingdata*eigvector;

five = Y(1:length(train5),:);
six = Y(length(five)+1:length(five)+length(train6),:);
eight = Y(length(six)+length(five)+1:length(Y),:);

% Plot of the training data 
figure('Name','PCA - trainingdata * eigvenvectors','NumberTitle','off')
plot(five(:,1),five(:,2),'.r',six(:,1),six(:,2),'.b',eight(:,1),eight(:,2),'.g')
legend('Five','Six','Eight')

%Assignment 2 : perform 3-class classification based on the generated
%2-dimensional data:

%constructing Gaussian Mixture Model
mix = gmm(2, 1, 'full'); 
options = foptions;

%Training the algorithm by using Expectation Maximization
mixFive = gmmem(mix, five, options);
mixSix = gmmem(mix,six,options);
mixEight = gmmem(mix,eight,options);

%Getting testdata
testdata = double([test5;test6;test8]);
testgnd = [ones(length(test5),1)*5;ones(length(test6),1)*6;ones(length(test8),1)*8];

%Reducing of the test data and projecting
testY = testdata*eigvector;
testFive = testY(1:length(test5),:);
testSix = testY(length(testFive)+1:length(testFive)+length(test6),:);
testEight = testY(length(testSix)+length(testFive)+1:length(testY),:);

%Calculating the likelyhood functions (using gauss to evalute the gaussian
%distribution
evalFive = gauss(mixFive.centres, mixFive.covars, testY);
evalSix = gauss(mixSix.centres, mixSix.covars, testY);
evalEight = gauss(mixEight.centres, mixEight.covars, testY);

% Classifieing the test data set:
numFive = 0;
numSix = 0;
numEight = 0;
misclass = 0;
for ii=1:length(testY)
    largest = max([evalFive(ii),evalSix(ii),evalEight(ii)]); %By using max(X) we get the largest element in X. 
    %And for matrices this is a row vector with the largest element from each column
    if largest == evalFive(ii)
        numFive = numFive +1;
        classres = 5;
        classifiedFive(numFive,:) = testY(ii,:);
    elseif largest == evalSix(ii)
         numSix = numSix +1;
        classres = 6;
        classifiedSix(numSix,:) = testY(ii,:);
    else
        numEight = numEight +1;
        classres = 8;
        classifiedEight(numEight,:) = testY(ii,:);
    end
    if classres ~= testgnd(ii)
        misclass = misclass +1;
    end
end

%Accuracy is calculated
accuracy = 1-misclass/length(testgnd);
fprintf('b) PCA - Accuracy = %f\n',accuracy);

%The classified data is plotted
figure('Name','PCA - classifieddata * eigvenvectors','NumberTitle','off')
plot(classifiedFive(:,1),classifiedFive(:,2),'.r',classifiedSix(:,1),classifiedSix(:,2),'.b',classifiedEight(:,1),classifiedEight(:,2),'.g')
legend('Five','Six','Eight')

%The 100% correct data.
figure('Name','PCA - 100% correct data','NumberTitle','off')
plot(testFive(:,1),testFive(:,2),'.r',testSix(:,1),testSix(:,2),'.b',testEight(:,1),testEight(:,2),'.g')
legend('Five','Six','Eight')