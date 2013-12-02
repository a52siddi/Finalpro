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
	string firstname;
	string lastname;
	int age;
	char gender;

public:
	void Information();

};

class Electrolytes: public bloodtests{
	double sodiumconc;
		double potassiumconcen;
		double chlorideconcen;
		int pH;
		double Olevel;
		double bicarblevel;

public:
		void ionlevel(); //asks for concentration of sodium, potassium, chloride, bicarbonate ions and oxygen level of blood and provides feedback
	     void pH(); //asks for pH levels and provides feedback.
};

class Completebloodcount: public bloodtests{
	double redbloodcell;
		double whitebloodcell;
		double plat;
		double hemo;
		double hemat;
		double volume;
public:
		void bloodcellcount(); //asks for blood cell count and provides feedback.
		void platelets (); //uses plat as input and provides feedback.
		void Hemoglobin (); //uses hemo as input and provides feedback.
		void Hematocrit (); //uses hemat as input and provides feedback.
		void meancorpuscularvolume (); //uses volume as input and provides feedback.

};

class Lipoprotein: public bloodtests{
	double cholestrol_low;
		double cholestrol_high;
		double cholestrol_total;
public:
		void Cholestrol(); //uses the above values as input to provide feedback.

};




#endif /* BLOODTESTS_HPP_ */
