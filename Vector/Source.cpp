#include <iostream>
#include "Point.h"
#include "Vector.h"
using namespace std;

int main()
{

	Point p(2, 6);
	Point p2(4, 2);
	Point p3(6, 8);
	Point p4(1, 1);
	Point p5(8, 8);

	Vector vec;
	vec.Add_Point(p);
	vec.Add_Point(p2);
	vec.Add_Point(p3);
	vec.Add_Point(p4);
	vec.Add_Point(p5);
	vec.Print();
	cout << endl;
	
	if (p > p2)
	{
		cout << "p >" << endl;
	}
	else
	{
		cout << "p <" << endl;
	}

	p.Print();
	!p;
	p.Print();
	p++;
	p.Print();
	++p;
	p.Print();

	Vector vec2 = vec;
	cout << endl;
	vec2.Print();

	Vector vec3;
	vec3.Add_Point(p);
	vec3.Add_Point(p2);
	cout << endl;
	vec3.Print();

	vec3 = vec;
	vec3.Print();

	system("pause");
	return 0;
}