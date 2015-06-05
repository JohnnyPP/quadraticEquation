/*
 * Solver.cpp
 *
 *  Created on: Jun 4, 2015
 *      Author: kolan
 */

#include "Solver.h"
#include <iostream>
#include <math.h>

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
	std::cout << "Please type coefficient a: ";
	std::cin>>a;
	std::cout << "Please type coefficient b: ";
	std::cin>>b;
	std::cout << "Please type coefficient c: ";
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

double Solver::RealSolution()
{
	return -b/2*a;
}

Solver::roots Solver::RealRoots(double discriminant)
{
	Solver::roots rootsReal;
	rootsReal.x1Real = (-b-sqrt(discriminant))/(2*a);
	rootsReal.x2Real = (-b+sqrt(discriminant))/(2*a);

	return rootsReal;
}

Solver::roots Solver::ComplexRoots(double discriminant)
{
	Solver::roots rootsComplex;
	rootsComplex.x1Real=-b/2*a;
	rootsComplex.x1Imaginary=(sqrt(-discriminant))/(2*a);
	rootsComplex.x2Imaginary=-(sqrt(-discriminant))/(2*a);

	return rootsComplex;
}

void Solver::Solve()
{
	double delta = Discriminant();

	if(delta>0)
	{
		std::cout << std::showpos << "\nThe equation " << a << "x²" << b << "x" << c << std::endl; // showpos prints +/- signs
		std::cout << std::noshowpos << "Has two real roots x1 = " << RealRoots(delta).x1Real << " and x2 = " <<RealRoots(delta).x2Real; // http://www.cplusplus.com/reference/ios/showpos/

	}
	else if (delta<0)
	{
		std::cout << std::showpos << "\nThe equation " << a << "x²" << b << "x" << c << std::endl;
		std::cout << std::showpos << "Has two imaginary roots z1 = " << ComplexRoots(delta).x1Real << ComplexRoots(delta).x1Imaginary << "i";
		std::cout << std::showpos << " and z2 = " << ComplexRoots(delta).x1Real << ComplexRoots(delta).x2Imaginary << "i";
	}
	else /*delta == 0*/
	{
		std::cout << std::showpos << "\nThe equation " << a << "x²" << b << "x" << c << std::endl;
		std::cout << "Has only one solution: x1 = 2x = " << RealSolution();
	}
}
