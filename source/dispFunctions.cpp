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
	cout << "HERE 1a" << endl;
    time.zeros(nsteps);
    disp.zeros(nsteps);
    eps.zeros(nsteps);
    cout << "HERE 2a" << endl;
    
    for(int ii = 1; ii < nsteps; ii++) {
        time(ii) = (ii-1.0) * time_tot/double(nsteps);
        disp(ii) = -h * (exp(strainrate * time(ii))-1.0);
        eps(ii)  = log(1.0 + disp(ii)/h);
        if (ii==5)
        {
            cout << "HERE 3a"
        	cout << "time = " << time(5) << endl;
    		cout << "disp = " << disp(5) << endl;
    		cout << "eps = " << eps(5) << endl;
        }
    }
    cout << "HERE 4a" << endl;
}

void shpbAppliedDisp(vec & time, vec & disp, vec & eps, int nsteps, int time_tot, double strainrate, double h)
{
	vec time_update;

    time.zeros(nsteps);
    disp.zeros(nsteps);
    eps.zeros(nsteps);
    time_update.zeros(nsteps);

    int ll = 0;

    cout << "HERE 1b" << endl;

    for(int ii = 1; ii < nsteps; ii++) {
        time(ii) = (ii-1.0) * time_tot/double(nsteps);
        if(time(ii) < 0.00005) {
			time_update(ii) = 0.0;
			disp(ii) = 0.0;
			eps(ii) = 0.0;
		} else if(time(ii) >= 0.00005 && time(ii) < 0.00075) {
			ll++;
			time_update(ii) = (ll-1) * time_tot/double(nsteps);
			disp(ii) = -h * (exp(strainrate * time_update(ii))-1.0);
			eps(ii) = log(1.0 + disp(ii)/h);
		} else {
			disp(ii) = disp(ii-1);
			eps(ii) = eps(ii-1);
		}
    }
    cout << "HERE 2b" << endl;
}