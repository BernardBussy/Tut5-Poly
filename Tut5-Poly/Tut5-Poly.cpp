//Driver Program for the shape class and derived classes :)
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

int main()
{
	Circle circle1(3);
	circle1.name();
	circle1.draw();
	cout << "Area  " << circle1.area() << "  and perimeter  " << circle1.perimeter() << endl;

	cout << "You have created " << Shape::noOfShapes << " Shapes so Far!! " << endl;

	Triangle triangle1(4);
	triangle1.name();
	triangle1.draw();
	cout << "Area  " << triangle1.area() << "  and perimeter  " << triangle1.perimeter() << endl;

	cout << "You have created " << Shape::noOfShapes << " Shapes so Far!! " << endl;
}