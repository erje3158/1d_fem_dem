//
//  disp_functions.cpp
//  Jensen_code
//
//  Created by Erik Jensen 9/21/2017.
//  Copyright �� 2017 Erik Jensen. All rights reserved.
//

#include "dispFunctions.h"

using namespace std;
using namespace arma;

void finiteAppliedDisp(vec & time, vec & disp, vec & eps, int nsteps, int time_tot, double strainrate, double h)
{
    time.zeros(nsteps);
    disp.zeros(nsteps);
    eps.zeros(nsteps);
    
    for(int ii = 1; ii < nsteps; ii++) {
        time(ii) = (ii-1.0) * time_tot/double(nsteps);
        disp(ii) = -h * (exp(strainrate * time(ii))-1.0);
        eps(ii)  = log(1.0 + disp(ii)/h);
    }
}

void shpbAppliedDisp()
{
	cout << "SHPB Displacement" << endl;
}