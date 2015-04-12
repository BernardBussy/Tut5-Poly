#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
public:
	Rectangle(int, int);
	~Rectangle();
	double perimeter();
	double area();
	void draw();
private:
	const int sidesA;
	const int sidesB;

};

