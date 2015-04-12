#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
public:
	Triangle(int);
	~Triangle();
	void draw();
	double area();
	double perimeter();

private:
	const int Side;
};

