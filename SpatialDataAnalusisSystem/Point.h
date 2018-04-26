#pragma once
#include "Shape.h"
#include "Line.h"
#include "Rectangle.h"

using std::ostream;

class Point : public Shape {
	float x, y;
	static int count;
public:
	Point(): x(0), y(0){}
	Point(float fx, float fy): x(fx), y(fy){}
	Point(Point& p): x(p.x), y(p.y){}
	~Point() {}

	virtual float Area() { return 0; }
	virtual void WriteToFile(ofstream &o);
	static int GetCount() { return count; }

	void setX(float fx) { x = fx; }
	void setY(float fy) { y = fy; }
	float Distance(const Point&) const;
	float Distance_R(const Rect&) const;
	float Distance_L(const Line&) const;

	friend ostream& operator<<(ostream& os, const Point& outputPoint);
	friend bool operator<(const Point&, const Point&);
	friend Point operator+(const Point&, const Point&);
};