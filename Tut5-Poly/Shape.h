#pragma once
#include <string>
using namespace std;
class Shape
{
public:
	Shape();
	~Shape();
	virtual void name() = 0;
	virtual float perimeter() = 0;
	virtual float area() = 0;
	virtual void draw();
	
	static int noOfShapes;
protected:
	int noOfSides;
	string nameOfShape;
};

