#include "Line.h"

Line::Line(Point, Point)
{
}

Line::Line(Line &)
{
}

float Line::Area()
{
	return 0.0f;
}

void Line::WriteToFile(ofstream & o)
{
}

void Line::setP1(const Point &)
{
}

void Line::setP2(const Point &)
{
}

ostream & operator<<(ostream &, const Line &)
{
	// TODO: �ڴ˴����� return ���
}

bool operator<(const Line &, const Line &)
{
	return false;
}
