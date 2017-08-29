//
//  meshTools.cpp
//  Jensen_code
//
//  Created by Erik Jensen 8/25/2017.
//  Copyright �� 2017 Erik Jensen. All rights reserved.
//

#include "armadillo"
#include "meshTools.h"

using namespace std;

void createCoords(mat & coords, vec params)
{
	coords.set_size(params(9),params(10));
}