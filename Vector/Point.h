#pragma once
#include <iostream>

using namespace std;
//template <class T>
class Point
{
private:
	//T x;
	//T y;
	int x;
	int y;
public:
	Point();
	//Point(T count) : x(count), y(count) {}
	//Point(T x, T y) : x(x), y(y) {}
	Point(int count);
	Point(int x, int y);
	void Print()const;
	Point& operator++();
	Point& operator--();
	Point& operator++(int);
	Point& operator--(int);
	bool operator<(const Point& other);
	bool operator>(const Point& other);
	Point& operator!();

	int GetX();
	int GetY();

	~Point();

};



