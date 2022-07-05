#pragma once
#include "Rectangle.h"
class Triangle : Rectangle
{
	public: 
		double base;
	protected:
		double getArea(double b, double h)
		{
			return .5 * b * h;
		}
};

