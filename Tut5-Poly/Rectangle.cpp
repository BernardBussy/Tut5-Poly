#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int A, int B) : sidesA(A), sidesB(B)
{
	nameOfShape = "Rectangle";
	noOfShapes++;
	noOfSides = 4;
}


Rectangle::~Rectangle()
{
	noOfShapes--;
}

double Rectangle::perimeter()
{
	return (2 * sidesA + 2 * sidesB);
}
double Rectangle::area()
{
	return sidesA*sidesB;
}
void Rectangle::draw()
{
	cout << "This is a Rectangle with sides A = " << sidesA << " and sides B = " << sidesB << endl;
}