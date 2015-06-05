/*
 * Solver.h
 *
 *  Created on: Jun 4, 2015
 *      Author: kolan
 */

#ifndef SOLVER_H_
#define SOLVER_H_


class Solver
{
public:

	typedef struct Roots
	{
		double x1Real;
		double x2Real;
		double x1Imaginary;
		double x2Imaginary;
	} roots;


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

	double a,b,c;


};

#endif /* SOLVER_H_ */
