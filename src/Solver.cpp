/*
 * Solver.cpp
 *
 *  Created on: Jun 4, 2015
 *      Author: JohnnyP
 */

#include "Solver.h"
#include <iostream>
#include <math.h>

Solver::Coeff coeff;

Solver::Solver()
{
	coeff.a = 0;
	coeff.b = 0;
	coeff.c = 0;
}

Solver::~Solver()
{
	std::cout << "\nProgram terminated" << std::endl;
}

void Solver::GetCoefficients()
{
	std::cout << "This program solves the equation ax² + bx + c" << std::endl;
	std::cout << "\nPlease type coefficient a: ";
	std::cin>>coeff.a;
	std::cout << "Please type coefficient b: ";
	std::cin>>coeff.b;
	std::cout << "Please type coefficient c: ";
	std::cin>>coeff.c;
}

void Solver::PrintCoefficients()
{
	std::cout << "a = " << coeff.a << ", b = " << coeff.b << ", c = " << coeff.c << std::endl;
}

double Solver::Discriminant()
{
	return coeff.b*coeff.b-4*coeff.a*coeff.c;
}

double Solver::RealSolution()
{
	return -coeff.b/2*coeff.a;
}

Solver::Roots Solver::RealRoots(double discriminant)
{
	Solver::Roots rootsReal;

	rootsReal.x1Real = (-coeff.b-sqrt(discriminant))/(2*coeff.a);
	rootsReal.x2Real = (-coeff.b+sqrt(discriminant))/(2*coeff.a);

	return rootsReal;
}

Solver::Roots Solver::ComplexRoots(double discriminant)
{
	Solver::Roots rootsComplex;

	rootsComplex.x1Real=-coeff.b/2*coeff.a;
	rootsComplex.x1Imaginary=(sqrt(-discriminant))/(2*coeff.a);
	rootsComplex.x2Imaginary=-(sqrt(-discriminant))/(2*coeff.a);

	return rootsComplex;
}

void Solver::Solve()
{
	double delta = Discriminant();

	if(delta>0)
	{
		std::cout << std::showpos << "\nThe equation " << coeff.a << "x²" << coeff.b << "x" << coeff.c << std::endl; // showpos prints +/- signs
		std::cout << std::noshowpos << "Has two real roots x1 = " << RealRoots(delta).x1Real << " and x2 = " <<RealRoots(delta).x2Real; // http://www.cplusplus.com/reference/ios/showpos/

	}
	else if (delta<0)
	{
		std::cout << std::showpos << "\nThe equation " << coeff.a << "x²" << coeff.b << "x" << coeff.c << std::endl;
		std::cout << std::showpos << "Has two imaginary roots z1 = " << ComplexRoots(delta).x1Real << ComplexRoots(delta).x1Imaginary << "i";
		std::cout << std::showpos << " and z2 = " << ComplexRoots(delta).x1Real << ComplexRoots(delta).x2Imaginary << "i";
	}
	else /*delta == 0*/
	{
		std::cout << std::showpos << "\nThe equation " << coeff.a << "x²" << coeff.b << "x" << coeff.c << std::endl;
		std::cout << "Has only one solution: x1 = 2x = " << RealSolution();
	}
}
