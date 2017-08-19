//
//  userinput.cpp
//  Jensen_code
//
//  Created by Erik Jensen 8/11/2017.
//  Copyright �� 2017 Erik Jensen. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "userInput.h"

using namespace std;

//Read data from input file
void userInput::readData(const char * inputFile)
{
  string line; ifstream input(inputFile);
  while ( getline(input,line) )
    {
      if ( line == "$FEM Parameters"         ) { input >> this->lambda     ;
                                                 input >> this->mu         ;
                                                 input >> this->rho        ;}
      if ( line == "$Mass Damping"           ) { input >> this->alphaM     ;}
    }
  input.close();
}

//Print user inputs for review
void userInput::echoData()
{
  cout << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "Summary of Inputs:" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << endl;
  cout << "FEM Paramters" << endl;
  cout << "lambda = " << this->lambda << endl;
  cout << "mu     = " << this->mu     << endl;
  cout << "rho    = " << this->rho    << endl;
  cout << endl;
  cout << "Mass Damping" << endl;
  cout << "alphaM = " << this->alphaM << endl;
  cout << endl;
}




