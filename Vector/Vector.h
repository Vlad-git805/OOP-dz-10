#pragma once
#include <iostream>
#include "Point.h"

using namespace std;

class Vector
{
private:
	Point* points;
	int countPoints;
public:
	Vector();
	Vector(const Vector& other);
	Vector(Vector&& other);
	Vector& operator=(const Vector&other);
	Vector& operator=(Vector&& other);
	void Add_Point(const Point &p);
	void Print()const;
	~Vector();

};