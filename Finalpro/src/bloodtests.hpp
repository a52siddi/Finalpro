/*
 * bloodtests.hpp
 *
 *  Created on: Nov 22, 2013
 *      Author: Family
 */

#ifndef BLOODTESTS_HPP_
#define BLOODTESTS_HPP_
#include <iostream>
#include<string>
using namespace std;
class bloodtests{
	double sodiumconc;
	double potassiumconc;
	double chlorideconc;
	int pH;
	double Olevel;
	double bicarblevel;
	double redbloodcell;
	double whitebloodcell;
	double platelets;
	double hemoglobin;
	double hematocrit;
	double meancorpuscularvolume;
	double cholestrol_low;
	double cholestrol_high;
	double cholestrol_total;

public:
	void Electrolytes();
	void Completebloodcount();
	void Lipoprotein();

};




#endif /* BLOODTESTS_HPP_ */
