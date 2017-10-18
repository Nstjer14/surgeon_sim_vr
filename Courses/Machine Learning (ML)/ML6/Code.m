load mnist_all.mat;

%test datur, delet
fea = rand(50,70);
gnd = [ones(10,1);ones(15,1)*2;ones(10,1)*3;ones(15,1)*4];

%real shit
fea = [train0;train1;train2;train3;train4;train5;train6;train7;train8;train9];
fea = double(fea);
gnd = [ones(5923,1);ones(6742,1)*2;ones(5958,1)*3;ones(6131,1)*4;ones(5842,1)*5;ones(5421,1)*6;ones(5918,1)*7;ones(6265,1)*8;ones(5851,1)*9;ones(5949,1)*10];
options = [];
options.Fisherface = 1;

[eigvector, eigvalue] = LDA(gnd, options, fea);
Y = fea*eigvector;

