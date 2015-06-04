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

	/*struct Roots
	{
	    double x1;
	    double x2;
	};*/

	typedef struct Roots
	{
		double x1_real;
		double x2_real;
		double x1_imaginary;
		double x2_imaginary;
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
