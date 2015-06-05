/*
 * Solver.h
 *
 *  Created on: Jun 4, 2015
 *      Author: JohnnyP
 */

#ifndef SOLVER_H_
#define SOLVER_H_


class Solver
{
public:

	typedef struct roots
	{
		double x1Real;
		double x2Real;
		double x1Imaginary;
		double x2Imaginary;
	} Roots;

	typedef struct coefficients
	{
		double a;
		double b;
		double c;

	} Coeff;

	Solver();
	virtual ~Solver();
	void GetCoefficients();
	void PrintCoefficients();
	void Solve();
	double Discriminant();
	double RealSolution();
	Roots RealRoots(double discriminant);
	Roots ComplexRoots(double discriminant);

private:

};

#endif /* SOLVER_H_ */
