/*
 * Solver.cpp
 *
 *  Created on: Jun 4, 2015
 *      Author: kolan
 */

#include "Solver.h"
#include <iostream>

Solver::Solver()
{
	a = 0, b = 0, c = 0;
}

Solver::~Solver()
{
	std::cout << "\nProgram terminated" << std::endl;
}

void Solver::GetCoefficients()
{
	std::cout << "Please type coefficient a: " << std::endl;
	std::cin>>a;
	std::cout << "Please type coefficient b: " << std::endl;
	std::cin>>b;
	std::cout << "Please type coefficient c: " << std::endl;
	std::cin>>c;
}

void Solver::PrintCoefficients()
{
	std::cout << "a = " << a << ", b = " << b << ", c = " << c;
}

double Solver::Discriminant()
{
	return b*b-4*a*c;
}
