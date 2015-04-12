#include "Triangle.h"
#include <iostream>
using namespace std;


Triangle::Triangle(int s) : Side(s)
{
	noOfShapes++;
	nameOfShape = "Triangle";
	noOfSides = 3;
}


Triangle::~Triangle()
{
	noOfShapes--;
}

void Triangle::draw()
{
	cout << "This is drawing a Triangle" << endl;
}
double Triangle::area()
{
	return 44;
}
double Triangle::perimeter()
{
	return (3*Side);
}