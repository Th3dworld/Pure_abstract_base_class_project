#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

//This is a sample program that shows the working of the Circle and Rectangle classes
//Matanda Hillary Phiri.

int main()
{
	//Initialize and instantialize objects
	Circle one(5, 2, 1);
	Rectangle oner(12, 10);

	//Dislay info using class member functions
	cout << "Here is information about the circle:\n";
	cout << "center x coordinate: " << one.getCenterX() << endl;
	cout << "center y coordinate: " << one.getCenterY() << endl;
	cout << "Radius : " << one.getRadius() << endl;
	cout << "Area : " << one.getArea() << "cmcm" << endl << endl;

	cout << "Here is hte information for the Rectangle:\n";
	cout << "Length: " << oner.getLength() << "cm" << endl;
	cout << "Width: " << oner.getWidth() << "cm" << endl;
	cout << "Area: " << oner.getArea() << "cmcm" << endl;

	cout << "\n\n\nArigato";

	return 0;
}