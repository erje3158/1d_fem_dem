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

}

void createLM(umat & LM, vec params)
{

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

void createG(mat & g, vec disp, vec params)
{

	g.zeros(params(10),params(9));
	g(params(10)-1,params(9)-1) = disp(0);

}

void whichELIP(int rank, int & el, int & ip)
{
/*	    //this is super hardcoded
	if (rank == 0) {
		el = 0;
		ip = 0;
	} else if (rank == 1) {
		el = 0;
		ip = 1;
	} else if (rank == 2) {
		el = 1;
		ip = 0;
	} else if (rank == 3) {
		el = 1;
		ip = 1;
	} else if (rank == 4) {
		el = 2;
		ip = 0;
	} else if (rank == 5) {
		el = 2;
		ip = 1;
	} else if (rank == 6) {
		el = 3;
		ip = 0;
	} else if (rank == 7) {
		el = 3;
		ip = 1;
	} else if (rank == 8) {
		el = 4;
		ip = 0;
	} else if (rank == 9) {
		el = 4;
		ip = 1;
	} else if (rank == 10) {
		el = 5;
		ip = 0;
	} else if (rank == 11) {
		el = 5;
		ip = 1;
	} else if (rank == 12) {
		el = 6;
		ip = 0;
	} else if (rank == 13) {
		el = 6;
		ip = 1;
	} else if (rank == 14) {
		el = 7;
		ip = 0;
	} else if (rank == 15) {
		el = 7;
		ip = 1;
	} else {
		cout << "AAAAAHHHHHH WRONG!!!!!" << endl;
	}*/

	el = rank / 2;

	int mod = rank % 2;

	if (mod == 0) 
	{
		ip = 0;
	}
	else if (mod == 1)
	{
		ip = 1;
	}
	else {
		cout << endl << endl << "ERROR: Check meshTools::whichELIP()" << endl << endl;
	}
}

void printELIP(int el, int ip)
{

	cout << endl;
	cout << "el = " << el << " :: ip = " << ip;
	cout << endl;

}

