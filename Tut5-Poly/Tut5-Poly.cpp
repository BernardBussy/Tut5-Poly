//Driver Program for the shape class and derived classes :)
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
	cout << "You have Now got " << Shape::noOfShapes << " Shapes!! " << endl;

	Shape *pointersToShapes[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 3) pointersToShapes[i] = new Circle(i);
		if ((i < 6) && (i >= 3)) pointersToShapes[i] = new Rectangle(i, 2);
		if ((i < 10) && (i >= 6)) pointersToShapes[i] = new Triangle(i);
	}
	
	cout << "You have Now got " << Shape::noOfShapes << " Shapes!! " << endl << endl;
	
	for (int i = 0; i < 10; i++)
	{
		pointersToShapes[i]->name();
		pointersToShapes[i]->draw();
		cout << "Area " << pointersToShapes[i]->area() << " and Perimeter " << pointersToShapes[i]->perimeter() << endl;
	}

}