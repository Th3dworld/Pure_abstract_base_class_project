//This is the specification file for the Rectangle class
//The rectangle class will be derived from the BasicShape abstract class
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "BasicShape.h"

class Rectangle : public BasicShape
{

	//Declare private attributes
	private:
		long width, length;

	//Declare public member variables
	public:
		//Parametized constructor
		Rectangle(long w, long l)
		{
			width = w;
			length = l;
			calcArea();
		}
		//Overidden CalcArea function
		virtual void calcArea()
		{
			area = length * width;
		}
		//Accessor functions
		long getWidth() const
		{
			return width;
		}
		long getLength() const
		{
			return length;
		}
		double getArea() const
		{
			return area;
		}
		
};

#endif // !RECTANGLE_H

