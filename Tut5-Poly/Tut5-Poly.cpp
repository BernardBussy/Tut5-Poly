//Driver Program for the shape class and derived classes :)
#include <iostream>
#include "Shape.h"
#include "Circle.h"
using namespace std;

int main()
{
	Circle circle1(3);
	circle1.name();
	circle1.draw();
	cout << "Area  " << circle1.area() << "  and perimeter  " << circle1.perimeter() << endl;
}