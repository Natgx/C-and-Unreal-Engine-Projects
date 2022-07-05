#pragma once
#include "Shape.h"
#include <cmath>
class Circle : Shape
{
	public:
		double radius;
	protected:
		double getArea(double r)
		{
			return 3.14 * pow(r, 2);
		}
			
};

