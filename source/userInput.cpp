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
      if ( line == "$FEM Parameters"    ) { input >> this->lambda     ;
                                            input >> this->mu         ;
                                            input >> this->rho        ;}
      if ( line == "$Gravity"           ) { input >> this->grav       ;}
      if ( line == "$FEM Geometry"      ) { input >> this->d          ;
                                            input >> this->LDratio    ;}
      if ( line == "$DEM Geometry"      ) { input >> this->h_DEM      ;
                                            input >> this->w_DEM      ;
                                            input >> this->l_DEM      ;}
      if ( line == "$Mass Damping"      ) { input >> this->alphaM     ;}
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
  cout << "FEM Paramters"                  << endl;
  cout << "lambda    = " << this->lambda   << endl;
  cout << "mu        = " << this->mu       << endl;
  cout << "rho       = " << this->rho      << endl;
  cout << endl;  
  cout << "Gravity"                        << endl;
  cout << "grav      = " << this->grav     << endl;
  cout << endl;
  cout << "FEM Geometry"                   << endl;
  cout << "d         = " << this->d        << endl;
  cout << "LDratio   = " << this->LDratio  << endl;
  cout << endl;
  cout << "DEM Geometry"                   << endl;
  cout << "h_DEM     = " << this->h_DEM    << endl;
  cout << "w_DEM     = " << this->w_DEM    << endl;
  cout << "l_DEM     = " << this->l_DEM    << endl;
  cout << endl;
  cout << "Mass Damping"                   << endl;
  cout << "alphaM    = " << this->alphaM   << endl;
  cout << endl;
}




