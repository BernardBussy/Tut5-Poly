#include "Triangle.h"
#include <allegro5\allegro.h>
#include <allegro5/allegro_primitives.h>
#include <iostream>
using namespace std;


Triangle::Triangle(int s) : Side(s)
{
	noOfShapes++;
	nameOfShape = "Triangle";
	noOfSides = 3;
}


Triangle::~Triangle()
{
	noOfShapes--;
}

void Triangle::draw()
{
	al_draw_triangle(320, 240, (320 + Side), (240 + Side), 120, 115, al_map_rgb_f(1, 0.5, 0), 5);
}
double Triangle::area()
{
	return 44;
}
double Triangle::perimeter()
{
	return (3*Side);
}