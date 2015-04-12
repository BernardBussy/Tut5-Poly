#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle(int);
	~Circle();
	double perimeter();
	double area();
	void draw();

private:
	const int radius;
};
