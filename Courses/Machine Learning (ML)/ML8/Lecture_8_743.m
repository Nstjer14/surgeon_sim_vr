%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Group ID : 743
% Members : Frederik Falk, Oliver Gyldenberg Hjermitslev, Atanas Nikolov,
% Nicklas Haagh Christensen, Niclas Hjorth Stjernholm
% Date : 25-09-17
% Lecture: 8 Neural Networking
% Dependencies: Netlab.
% Matlab version: 2017a
% Functionality: Makes a network from the training data and propegates the test data through the neural network.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clear all; close all;
load mnist_all;

%%%%%%%%%%%%%%%%%%%%%%%%%%-------TRAINING THE NEURAL NETWORK------%%%%%%%%%%%%%%%%%
trainingdata = double([train0;train1;train2;train3;train4;train5;train6;train7;train8;train9]);
gnd = [ones(length(train0),1)*0;ones(length(train1),1)*1;ones(length(train2),1)*2;ones(length(train3),1)*3;ones(length(train4),1)*4;ones(length(train5),1)*5;ones(length(train6),1)*6;ones(length(train7),1)*7;ones(length(train8),1)*8;ones(length(train9),1)*9];

options = [];
options.Fisherface = 1;

[eigvector, eigvalue] = LDA(gnd,options,trainingdata);
Y = trainingdata*eigvector;



%The following is only needed for plotting purposes.
sofar = 1;

zero = Y(1:length(train0),:);
sofar = sofar + length(zero);

one = Y(sofar:sofar+length(train1),:);
sofar = sofar + length(one);

two = Y(sofar:sofar+length(train2),:);
sofar = sofar + length(two);

three = Y(sofar:sofar+length(train3),:);
sofar = sofar + length(three);

four = Y(sofar:sofar+length(train4),:);
sofar = sofar + length(four);

five = Y(sofar:sofar+length(train5),:);
sofar = sofar + length(five);

six = Y(sofar:sofar+length(train6),:);
sofar = sofar + length(six);

seven = Y(sofar:sofar+length(train7),:);
sofar = sofar + length(seven);

eight = Y(sofar:sofar+length(train8),:);
sofar = sofar + length(eight);

nine = Y(sofar:length(Y),:);

%Linear Net Function Below:
net = mlp(9,10,10,'linear'); 
% 9: Dimension Vectors
% 13: Hidden layers. This amount of hidden layers are chosen as seen fit to
% avoid too large an error but also overfitting.
% 10: Possible output from 0 to 9

T = zeros(length(Y),10);

for ii=1:length(Y)
 T(ii,:) = [0,1,2,3,4,5,6,7,8,9];
end

its = 25; % Number of iterations.
class = mlptrain(net,Y,T,its); % Training the classifier with the net, from the training data, 
                               % to the target data, using its number of iterations



%%%%%%%%%%%%%%%%%%%%%%%%-------TEST DATA HERE---------%%%%%%%%%%%%%%%%%%
testdata = double([test0;test1;test2;test3;test4;test5;test6;test7;test8;test9]);
testY = testdata*eigvector;


res = mlpfwd(class,testY); % Results by propogate the data through the trained network "class". Output = matrix

%PLotting stuff here. 
plot(res,'.');
legend('Zero','One','Two','Three','Four','Five','Six','Seven','Eight','Nine');

% Calculating the accuracy below:
fails = 0;

for ii=1:length(res)
 fails = fails + sum((round(res(ii,:))-[0,1,2,3,4,5,6,7,8,9])>0);
 %As predictions and data type are two different data types (float and
 %int), we check the nearest integer instead of using floats. 
end
%Calculate the accuracy (there are 10 numbers per result, so we multiply by
%10)
acc = 1-(fails/(length(res)*10));

fprintf(' Accuracy = %f\n',acc);