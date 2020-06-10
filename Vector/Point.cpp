#include "Point.h"

Point::Point() : x(0), y(0) {}

Point::Point(int count) : x(count), y(count) {}

Point::Point(int x, int y) : x(x), y(y) {}

void Point::Print()const
{
	cout << "X: " << x << " Y: " << y << endl;
}

Point& Point::operator++()
{
	this->x++;
	this->y++;
	return *this;
}
Point& Point::operator--()
{
	this->x--;
	this->y--;
	return *this;
}
Point& Point::operator++(int)
{
	Point temp;
	this->x++;
	this->y++;
	return temp;
}
Point& Point::operator--(int)
{
	Point temp;
	this->x--;
	this->y--;
	return temp;
}
bool Point::operator<(const Point& other)
{
	double result1 = sqrt(pow(this->x, 2) + pow(this->y, 2));
	double result2 = sqrt(pow(other.x, 2) + pow(other.y, 2));
	return (result1 < result2);
}
bool Point::operator>(const Point& other)
{
	double result1 = sqrt(pow(this->x, 2) + pow(this->y, 2));
	double result2 = sqrt(pow(other.x, 2) + pow(other.y, 2));
	return (result1 > result2);
}
Point& Point::operator!()
{
	this->x *= -1;
	this->y *= -1;
	return *this;
}

int Point::GetX()
{
	return this->x;
}

int Point::GetY()
{
	return this->y;
}

Point::~Point() {}