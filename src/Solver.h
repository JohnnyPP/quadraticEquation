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

	Solver();
	virtual ~Solver();
	void GetCoefficients();
	void PrintCoefficients();
	void Solve();
	double Discriminant();
private:

	double a,b,c;
};

#endif /* SOLVER_H_ */
