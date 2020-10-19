#include "Circle.h"

Circle::Circle()
{
}

Circle::~Circle()
{
}

void Circle::setRadius(int r)
{
	radius = r;
}

int Circle::getRadius()
{
	return radius;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}
