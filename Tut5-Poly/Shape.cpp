#include "Shape.h"
#include <iostream>
using namespace std;

int Shape::noOfShapes = 0;
Shape::Shape()
{
}


Shape::~Shape()
{
}

void Shape::name()
{
	cout << "This shape is a:  " << nameOfShape << endl;
}