/*
CSCI 216 Fundamentals of Programming II Spring 2015
Program #2: Complex numbers
Author: Tomas Ochoa
Date Due: 9 February 2015

This file defines is the part of the program that calls the functions and uses the complex 
header file in the directory
*/
#include <iostream>
#include "complex(WithClass).h"
#include <iomanip>

using namespace std;

int main()
{
	//declares three complex number variables
	complexNum a,
			   b,
		       r;

	//gets the complex numbers and sets to a and b
	cout << "Enter two complex numbers in the form a+bi: ie 2-6i" << endl;
	cout << "a = ";
	a.read();
	cout << endl;
	cout << "b = ";
	b.read();

	//clears screen
	system("CLS");


	//prints user's input
	cout << "Your input:" << endl
		<< "a = ";
	a.print();

	cout << endl
		<< "b = ";
	b.print();

	cout << endl;

	//adds a and b and sets the result to r and prints it
	r = a.complexAdd(b);
	cout << endl << "The sum of a and b is: ";
	r.print();

	//subtracts a and b and sets the result to r and prints it
	r = a.complexSub(b);
	cout << endl << "The difference of a and b is: ";
	r.print();


	//multiplies a and b and sets the result to r and prints it
	r = a.complexMul(b);
	cout << endl << "The product of a and b is: ";
	r.print();

	
	//divides a and b and sets the result to r and prints it
	r = a.complexDiv(b);
	cout << endl << "The quotient of a and b is: ";
	r.print();
	cout << endl;	

	system("Pause");
	return 0;
}

//************************************   OUTPUT   *************************************************

/*

Enter two complex numbers in the form a+bi: ie 2-6i
a = 3
+4
i

b = 2
-6
i

*** CLEAR SCREEN (for neatness) ***

Your input:
a = 3+4i
b = 2-6i

The sum of a and b is: 5-2i
The difference of a and b is: 1+10i
The product of a and b is: 30-10i
The quotient of a and b is: -0.45+0.65i
Press any key to continue . . .

*/