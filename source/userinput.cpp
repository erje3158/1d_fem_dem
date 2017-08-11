//
//  userinput.cpp
//  Jensen_code
//
//  Created by Erik Jensen 8/11/2017.
//  Copyright �� 2017 Erik Jensen. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <cstring>

class userinput
{
public:

  int alphaM        ;  //Mass proportional damping parameter alpha

  //Inititalize values in memory
  userinput()
  {
    alphaM = 0;
  }

  //Read data from input file
  void readData(string inputfile)
  {
    sting line; ifstream input(inputfile);
    while ( getline(input,line) )
      {
	if ( line == "$alphaM"           ) { input >> alphaM     ;          }
      }
    input.close();
  }

  //Print user inputs for review
  void echoData()
  {
    cout << endl;
    cout << "Summary of Inputs:" << endl;
    cout << endl;
    cout << "alphaM = " << alphaM << endl;
    cout << endl;
  }

};
