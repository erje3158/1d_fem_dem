//
//  meshTools.cpp
//  Jensen_code
//
//  Created by Erik Jensen 8/25/2017.
//  Copyright �� 2017 Erik Jensen. All rights reserved.
//

#include "meshTools.h"

using namespace std;
using namespace arma;

void createCoords(mat & coords, vec params, double h)
{
	coords.set_size(params(9),params(10));

    coords(0,0) = 0.0;
    coords(0,1) = h/2;
    coords(1,0) = h/2;
    coords(1,1) = h;

}

void createLM(umat & LM, vec params)
{
	LM.set_size(params(10),params(9));

    LM(0,0) = 0;
    LM(0,1) = 1;
    LM(1,0) = 1;
    LM(1,1) = 0;

/*	int dof = 0;

	for (int i = 0, i < params(11), i++)
	{
		for (int j = 0, j < params(10), j++)
		{
			LM(j,i) = dof;
			dof++;
		}
	}*/
}