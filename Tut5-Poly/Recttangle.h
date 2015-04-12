#pragma once
#include "Shape.h"
class Recttangle :
	public Shape
{
public:
	Recttangle(int, int);
	~Recttangle();
	double perimeter();
	double area();
	void draw();
private:
	const int sidesA;
	const int sidesB;

};

