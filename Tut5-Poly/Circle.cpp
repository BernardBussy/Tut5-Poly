#include "Circle.h"
#include <iostream>
#include <string>
#define pi 3.41
using namespace std;


Circle::Circle(int r = 0) : radius(r)
{
	noOfShapes++;
	noOfSides = 1;
	nameOfShape = "Circle";
}


Circle::~Circle()
{
	noOfShapes--;
}

float Circle::perimeter()
{
	return (2 * pi*radius);
}
float Circle::area()
{
	return (pi*radius*radius);
}
void Circle::draw()
{
	cout << "This is a circle or Radius: " << radius << endl;
}

void Circle::name()
{
	cout << "This is a " << name << endl;
}