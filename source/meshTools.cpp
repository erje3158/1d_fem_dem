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

/*  coords.set_size(8,2);
    coords(0,0) = 0.0;
    coords(1,0) = h/8;
    coords(2,0) = h/4;
    coords(3,0) = 3*h/8;
    coords(4,0) = h/2;
    coords(5,0) = 5*h/8;
    coords(6,0) = 3*h/4;
    coords(7,0) = 7*h/8;
    coords(0,1) = h/8;
    coords(1,1) = h/4;
    coords(2,1) = 3*h/8;
    coords(3,1) = h/2;
    coords(4,1) = 5*h/8;
    coords(5,1) = 3*h/4;
    coords(6,1) = 7*h/8;
    coords(7,1) = h;*/

	coords.set_size(params(9),params(10));

	int dof = 0;

	for (int i = 0; i < params(10); i++)
	{
		for (int j = 0; j < params(9); j++)
		{
			coords(j,i) = dof * h / params(9);
			dof++;
		}
		dof = 1;
	}

	coords(params(9)-1,params(10)-1) = 0;

}

void createLM(umat & LM, vec params)
{

/*	LM.set_size(2,8);
    LM(0,0) = 0;
    LM(0,1) = 1;
    LM(0,2) = 2;
    LM(0,3) = 3;
    LM(0,4) = 4;
    LM(0,5) = 5;
    LM(0,6) = 6;
    LM(0,7) = 7;
    LM(1,0) = 1;
    LM(1,1) = 2;
    LM(1,2) = 3;
    LM(1,3) = 4;
    LM(1,4) = 5;
    LM(1,5) = 6;
    LM(1,6) = 7;
    LM(1,7) = 0;*/


	LM.set_size(params(10),params(9));

	int dof  = 0;

	for (int i = 0; i < params(10); i++)
	{
		for (int j = 0; j < params(9); j++)
		{
			LM(i,j) = dof;
			dof++;
		}
		dof = 1;
	}

	//Boundary Condition
	LM(params(10)-1,params(9)-1) = 0;
}






