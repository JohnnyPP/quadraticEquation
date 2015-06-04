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
	Solver::roots roots_real;
	roots_real.x1_real = (-b-sqrt(discriminant))/(2*a);
	roots_real.x2_real = (-b+sqrt(discriminant))/(2*a);

	return roots_real;
}

Solver::roots Solver::ComplexRoots(double discriminant)
{
	Solver::roots roots_complex;
	roots_complex.x1_real=-b/2*a;
	roots_complex.x1_imaginary=(sqrt(-discriminant))/(2*a);
	roots_complex.x2_imaginary=-(sqrt(-discriminant))/(2*a);

	return roots_complex;
}

void Solver::Solve()
{
	double delta = Discriminant();

	if(delta>0)
	{
		std::cout << std::showpos << "\nThe equation " << a << "x²" << b << "x" << c << std::endl; // showpos prints +/- signs
		std::cout << std::noshowpos << "Has two real roots x1 = " << RealRoots(delta).x1_real << " and x2 = " <<RealRoots(delta).x2_real; // http://www.cplusplus.com/reference/ios/showpos/

	}
	else if (delta<0)
	{
		std::cout << std::showpos << "\nThe equation " << a << "x²" << b << "x" << c << std::endl;
		std::cout << std::showpos << "Has two imaginary roots z1 = " << ComplexRoots(delta).x1_real << ComplexRoots(delta).x1_imaginary << "i";
		std::cout << std::showpos << " and z2 = " << ComplexRoots(delta).x1_real << ComplexRoots(delta).x2_imaginary << "i";
	}
	else /*delta == 0*/
	{
		std::cout << std::showpos << "\nThe equation " << a << "x²" << b << "x" << c << std::endl;
		std::cout << "Has only one solution: x1 = 2x = " << RealSolution();
	}
}
