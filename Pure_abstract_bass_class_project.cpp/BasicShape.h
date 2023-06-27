//This is the specification file for the abstract class BasicShape
#ifndef BASICSHAPE_H
#define BASICSHAPE_H

class BasicShape
{
	//Declare private attributes
	protected:
		double area;//holds shape's area
	
	//Declare public memebers
	public:
		double getArea() const
		{
			return area;
		}

		virtual void calcArea() = 0;//pure virtual function that makes class abstract
};

#endif // !BASICSHAPE_H
