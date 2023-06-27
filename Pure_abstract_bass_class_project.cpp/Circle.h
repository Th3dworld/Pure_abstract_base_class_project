//This is the specification file for the circle class
//The circle class is derived from the BasicShape Abstract class
#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"

class Circle : public BasicShape 
{
	//Declare private attributes
	private:
		long center_x, center_y;//hold x and y coordinates of center
		double radius;//holds radius
	
	//Declare public member functions
	public:
		//Parametized constructor that take dimensions of shape as argument
		Circle(double r, long y, long x)
		{
			center_x = x;
			center_y = y;
			radius = r;
			calcArea();
		}
		//Overiden calcArea function
		virtual void calcArea() 
		{
			area = 3.14159 * radius * radius;
		}
		//Accessor functions
		long getCenterY()
		{
			return center_y;
		}
		long getCenterX()
		{
			return center_x;
		}
		double getArea() const
		{
			return area;
		}
		double getRadius() const
		{
			return radius;
		}
};

#endif // !CIRCLE_H
