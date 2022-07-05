#pragma once
#include "Shape.h"
class Rectangle : Shape
{
	public:
		double height;
		double width;

	protected:
		double getArea(double h, double w)
		{
			return h * w;
		}
};

