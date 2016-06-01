/*
CSCI 216 Fundamentals of Programming II Spring 2015
Program #3: Complex numbers with class implementation
Author: Tomas Ochoa
Date Due: 9 February 2015

This header file defines a class for the complex numbers setting the funcitons 
as public members and the user's input as private members.The public members contain the 
functions that are necessary to perform complex aritmatic
*/
#ifndef complex(WithClass)_cpp
#define complex(WithClass)_cpp

// Declaration of a complex Class
class complexNum
{
	// Public members that can be accessed 
	public:
		complexNum();							// Replaces default constructor
		complexNum(double x, double y);			// Create a fraction x/y
		complexNum(double x);					// create a fraction x/1
		~complexNum();							// replaces default destructor


		//Definitions of computation functions 
		complexNum complexAdd(complexNum);		// add b to yourself
		complexNum complexSub(complexNum);		// subtract b to yourself
		complexNum complexMul(complexNum);		// multiply b to yourself
		complexNum complexDiv(complexNum);		// divide b to yourself

		void print();							// a.print() = "print yourself a"
		void read();							// a.read() = " a, read a value and store it in 
												//              yourslef"

	// Hidden memebers that have exclusive access
	private:

		char  junk,
			  i;

		double realNum, imaginaryNum;		// realNum and imaginary number of a compelx number
		int gcd(int, int);						// computes greatest common denominator of the
};												// numerator and denominator 

#endif //this ends the definition of "complex(WithClass)_cpp" if it is not already defined