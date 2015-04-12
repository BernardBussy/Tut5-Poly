#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle(int);
	~Circle();
	void name();
	float perimeter();
	float area();
	void draw();

private:
	const int radius;
};

