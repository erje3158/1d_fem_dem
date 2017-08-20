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

  double grav;

  double d;
  double LDratio;

  double h_DEM;
  double w_DEM;
  double l_DEM;

  double alphaM;

  userInput()
  {
  	lambda   = 0.0; // Pa
   	mu       = 0.0; // Pa
   	rho      = 0.0; // kg/m^3

    grav     = 0.0; // m/s^2

    d        = 0.0; // m
    LDratio  = 0.0; // m/m

    h_DEM    = 0.0; // m
    w_DEM    = 0.0; // m
    l_DEM    = 0.0; // m

   	alphaM = 0.0; //
  }

  void readData(const char * inputFile);
  void echoData();

};
