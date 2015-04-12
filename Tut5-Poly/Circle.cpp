#include <allegro5\allegro.h>
#include <allegro5/allegro_primitives.h>
#include "Circle.h"
#include <iostream>
#include <string>
#define pi 3.41
using namespace std;


Circle::Circle(int r = 0) : radius(r)
{
	noOfShapes++;
	noOfSides = 1;
	nameOfShape = "Circle";
}


Circle::~Circle()
{
	noOfShapes--;
}

double Circle::perimeter()
{
	return (2 * pi*radius);
}
double Circle::area()
{
	return (pi*radius*radius);
}
void Circle::draw()
{
	al_draw_circle(320, 240, radius, al_map_rgb_f(1, 0.5, 0), 3);
}