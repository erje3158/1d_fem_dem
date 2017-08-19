#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class userInput
{
	public:
  
  	double lambda;
	double mu;
	double rho;

  	double alphaM;

  	userInput()
    {
    	lambda = 0.0;
    	mu = 0.0;
    	rho = 0.0;

    	alphaM = 0.0;
    }

  void readData(const char * inputFile);
  void echoData();

};
