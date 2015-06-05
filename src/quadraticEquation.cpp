//===================================================================================
// Name        : quadraticEquation.cpp
// Author      : JohnnyP
// Version     : 1.0
// Copyright   : GPL
// Description : This program solves the quadratic equation of the form ax² + bx + c
//===================================================================================

#include <iostream>
#include "Solver.h"

using namespace std;

int main()
{
	Solver sol;

	sol.GetCoefficients();
	sol.PrintCoefficients();
	sol.Solve();

	return 0;
}
