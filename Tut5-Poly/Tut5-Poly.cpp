//Driver Program for the shape class and derived classes :)
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <allegro5\allegro.h>
#include <allegro5/allegro_primitives.h>
#include <stdio.h>
using namespace std;

int main()
{
/*	cout << "You have Now got " << Shape::noOfShapes << " Shapes!! " << endl;

	Shape *pointersToShapes[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 3) pointersToShapes[i] = new Circle(i);
		if ((i < 6) && (i >= 3)) pointersToShapes[i] = new Triangle(i);
		if ((i < 10) && (i >= 6)) pointersToShapes[i] = new Triangle(i);
	}
	
	cout << "You have Now got " << Shape::noOfShapes << " Shapes!! " << endl << endl;
	
	for (int i = 0; i < 10; i++)
	{
		pointersToShapes[i]->name();
		pointersToShapes[i]->draw();
		cout << "Area " << pointersToShapes[i]->area() << " and Perimeter " << pointersToShapes[i]->perimeter() << endl;
	} */

	ALLEGRO_DISPLAY *display = NULL;
	if (!al_init()) {
		fprintf(stderr, "failed to initialize allegro!\n");
		return -1;
	}
	al_init_primitives_addon();
	

	

	display = al_create_display(640, 480);
	if (!display) {
		fprintf(stderr, "failed to create display!\n");
		return -1;
	}
	al_clear_to_color(al_map_rgb(0, 0, 0));
	Circle circle1(60);
	Triangle triangle1(35);
	circle1.draw();
	triangle1.draw();
	al_flip_display();
	
	al_rest(2.0);
	al_destroy_display(display);


}