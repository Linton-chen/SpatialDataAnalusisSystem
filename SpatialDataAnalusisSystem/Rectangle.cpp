#include "Rectangle.h"

Rect::Rect(const Rect &)
{
}

float Rect::Area()
{
	return 0.0f;
}

void Rect::WriteToFile(ofstream & o)
{
}

int Rect::setLp(const Point &)
{
}

int Rect::setRp(const Point &)
{
}

float Rect::Distance(const Rect &)
{
	return 0.0f;
}

ostream & operator<<(ostream &, const Rect &)
{
	// TODO: �ڴ˴����� return ���
}

Rect operator+(const Rect &, const Rect &)
{
	return Rect();
}

bool operator<(const Rect &, const Rect &)
{
	return false;
}
