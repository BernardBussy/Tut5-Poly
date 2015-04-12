#include <allegro5\allegro.h>
#include <allegro5/allegro_primitives.h>
#include "Recttangle.h"
#include <iostream>
using namespace std;

Recttangle::Recttangle(int A, int B) : sidesA(A), sidesB(B)
{
	nameOfShape = "Recttangle";
	noOfShapes++;
	noOfSides = 4;
}


Recttangle::~Recttangle()
{
	noOfShapes--;
}

double Recttangle::perimeter()
{
	return (2 * sidesA + 2 * sidesB);
}
double Recttangle::area()
{
	return sidesA*sidesB;
}
void Recttangle::draw()
{
	al_draw_rectangle(320, 240, (320 + sidesA), (320 + sidesB), al_map_rgb_f(1, 0.5, 0), 5);
}