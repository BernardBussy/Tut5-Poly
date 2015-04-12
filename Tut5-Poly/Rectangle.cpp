#include <allegro5\allegro.h>
#include <allegro5/allegro_primitives.h>
#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int A, int B) : sidesA(A), sidesB(B)
{
	nameOfShape = "Rectangle";
	noOfShapes++;
	noOfSides = 4;
}


Rectangle::~Rectangle()
{
	noOfShapes--;
}

double Rectangle::perimeter()
{
	return (2 * sidesA + 2 * sidesB);
}
double Rectangle::area()
{
	return sidesA*sidesB;
}
void Rectangle::draw()
{
	al_draw_rectangle(320, 240, (320 + sidesA), (320 + sidesB), al_map_rgb_f(1, 0.5, 0), 5);
}