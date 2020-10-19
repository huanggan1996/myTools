#include "AlgCPP.h"
#include "Circle.h"

AlgCPP::AlgCPP()
{
	c = new Circle();
}

AlgCPP::~AlgCPP()
{
	delete c;
}

void AlgCPP::setRadius(int r)
{
	((Circle *)c)->setRadius(r);
}

float AlgCPP::getArea()
{
	return ((Circle *)c)->getArea();
}