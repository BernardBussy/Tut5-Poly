#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle(int);
	~Circle();
	void name();
	double perimeter();
	double area();
	void draw();

private:
	const int radius;
};
