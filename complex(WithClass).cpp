/*
CSCI 216 Fundamentals of Programming II Spring 2015
Program #2: Complex numbers
Author: Tomas Ochoa
Date Due: 9 February 2015

This file contains all the functions used in the program to compute the
addition, subtraction, multiplication and division of complex numbers
*/
#include <iomanip>
#include <iostream>
#include "complex(WithClass).h"

using namespace std;

complexNum::complexNum()										// replaces the default constructor
{
	realNum = imaginaryNum = 1;

	return;
}

complexNum::complexNum(double x, double y)						// creates a complex num
{
	realNum = x;
	imaginaryNum = y;

	return;
}

complexNum::~complexNum()										// replaces default destructor
{
	return;
}

complexNum complexNum::complexAdd(complexNum y)
{
	complexNum result;

	result.realNum = (realNum + y.realNum);
	result.imaginaryNum = (imaginaryNum + y.imaginaryNum);
	result.i = 'i';

	return result;
}



complexNum complexNum::complexSub(complexNum y)
{
	complexNum result;

	result.realNum = (realNum - y.realNum);
	result.imaginaryNum = (imaginaryNum - y.imaginaryNum);
	result.i = 'i';

	return result;
}

complexNum complexNum::complexMul(complexNum y)
{
	complexNum result;

	result.realNum = ((realNum * y.realNum)-(imaginaryNum * y.imaginaryNum));
	result.imaginaryNum = ((imaginaryNum * y.realNum) + (realNum * y.imaginaryNum));
	result.i = 'i';

	return result;
}


complexNum complexNum::complexDiv(complexNum y)
{
	complexNum result;
	
	result.realNum = ((realNum * y.realNum) + (imaginaryNum * y.imaginaryNum)) / ((y.realNum * y.realNum) + (y.imaginaryNum * y.imaginaryNum));
	result.imaginaryNum = ((imaginaryNum * y.realNum) - (realNum * y.imaginaryNum)) / ((y.realNum * y.realNum) + (y.imaginaryNum * y.imaginaryNum));
	result.i = 'i';

	return result;
}

void complexNum::print()
{
	if (imaginaryNum >= 0)
	{
		junk = '+';
		cout << realNum << junk << imaginaryNum << i;
	}
	else
		cout << realNum << imaginaryNum << i;
	return;
}


void complexNum::read()
{
	cin >> realNum;
	cin >> imaginaryNum;
	cin >> i;

	return;
}


int gcd(int x, int y)
{
	int rem;

	if (y == 0)
	{
		cerr << "divisr = 0!" << endl;
		exit(10);
	}

	rem = x % y;
	while (rem > 0)
	{
		x = y;
		y = rem;
		rem = x % y;
	}
	return y;
}
