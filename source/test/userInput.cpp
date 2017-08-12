//
//  userinput.cpp
//  Jensen_code
//
//  Created by Erik Jensen 8/11/2017.
//  Copyright �� 2017 Erik Jensen. All rights reserved.
//

using namespace std;

#include <iostream>
#include <fstream>
#include <string>

class userInput
{
public:

  double alphaM        ;  //Mass proportional damping parameter alpha

  //Inititalize values in memory
  userInput()
  {
    alphaM = 0.0;
  }

  //Read data from input file
  void readData(const char * inputFile)
  {
    string line; ifstream input(inputFile);
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


int main (int argc, char * argv[]) 
{
  
  const char * inputFile = argv[1];
  
  userInput myinput;
  myinput.readData(inputFile);
  myinput.echoData();

}
