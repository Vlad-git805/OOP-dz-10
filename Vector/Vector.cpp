#include "Vector.h"

Vector::Vector() : points(nullptr), countPoints(0) {}

Vector::Vector(Vector&& other)
{
	this->points = other.points;
	this->countPoints = other.countPoints;

	other.points = nullptr;
	other.countPoints = 0;
}

Vector::Vector(const Vector& other)
{
	this->countPoints = other.countPoints;
	this->points = new Point[countPoints];
	for (int i = 0; i < countPoints; i++)
	{
		this->points[i] = other.points[i];
	}
}

Vector& Vector::operator=(const Vector&other)
{
	if (this == &other)
		return *this;

	if (points != nullptr) delete[]points;
	this->countPoints = other.countPoints;
	this->points = new Point[countPoints];
	for (int i = 0; i < countPoints; i++)
	{
		points[i] = other.points[i];
	}
}

Vector& Vector::operator=(Vector&& other)
{
	this->countPoints = other.countPoints;
	this->points = other.points;

	other.points = nullptr;
	other.countPoints = 0;
	return *this;
}

void Vector::Add_Point(const Point &p)
{
	Point *temp = new Point[countPoints + 1];
	for (int i = 0; i < countPoints; i++)
	{
		temp[i] = this->points[i];
	}
	temp[countPoints] = p;
	delete[]points;
	countPoints++;
	points = temp;
}

void Vector::Print()const
{
	for (int i = 0; i < countPoints; i++)
	{
		cout << "X: " << points[i].GetX() << " Y: " << points[i].GetY() << endl;
	}
}

Vector::~Vector()
{
	if (points != nullptr)
		delete[]points;
}