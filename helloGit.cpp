/**
    This is the implementation of the HelloGit class defined in the 
    helloGit.h header file. 

    The intention of this programs is to understand how to upload an
    opensource project on GitHub

    Author: Junaid Ahmed
 */


#include <iostream>
#include "helloGit.h"

using namespace std;

HelloGit::HelloGit(){

	cout <<" Welcome to HelloGit Program !!! " << endl;
}

void HelloGit::setLoveForGit(int love){

	_howMuchILoveGit = love;
}

int HelloGit::getLoveForGit(){

	return _howMuchILoveGit;
}

