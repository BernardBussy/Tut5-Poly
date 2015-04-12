#pragma once
#include <string>
using namespace std;
class Shape
{
public:
	Shape();
	~Shape();
	void name();
	virtual double perimeter() = 0;
	virtual double area() = 0;
	virtual void draw() = 0;
	
	static int noOfShapes;
protected:
	int noOfSides;
	string nameOfShape;
};

