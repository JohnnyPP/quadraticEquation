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
	float a,b,c;

	Solver();
	virtual ~Solver();
	void getCoefficients();
	void printCoefficients();
};

#endif /* SOLVER_H_ */
