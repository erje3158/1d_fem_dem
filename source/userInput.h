using namespace std;

#include <iostream>
#include <fstream>
#include <string>

class userInput
{
 public:
  
  double alphaM;

  userInput()
    {
      alphaM = 0.0;
    }

  void readData(const char * inputFile);
  void echoData();

};
