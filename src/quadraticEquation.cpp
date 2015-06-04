//============================================================================
// Name        : quadraticEquation.cpp
// Author      : KK
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Solver.h"

using namespace std;

int main() {

	Solver sol;
	sol.GetCoefficients();
	sol.PrintCoefficients();

	return 0;
}
