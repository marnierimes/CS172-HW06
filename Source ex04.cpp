//
//Marnie Rimes
//HW06 ex04
//Liang 14.3: The Circle class
//
#include<iostream>
using namespace std;

class Circle
{
public:
	//constructor
	Circle()
	{
		radius = 1;
		numberOfObjects++;
	}
	Circle(double newRadius)
	{
		radius = newRadius;
		numberOfObjects++;
	}
	double getArea() const
	{
		return radius * radius * 3.14159;
	}
		
	double getRadius() const
	{
		return radius;
	}
	void setRadius(double newRadius)
	{
		radius = newRadius;
	}
	static int getNumberOfObjects()
	{
		return numberOfObjects;
	}
	//operator for less than
	bool operator<(const Circle& radius2)
	{
		if (radius < radius2)
			return true;
		else
			return false;
	}
	//operator for less than or equal to
	bool operator<=(const Circle& radius2)
	{
		if (radius <= radius2)
			return true;
		else
			return false;
	}
	//operator for equal to
	bool operator==(const Circle& radius2)
	{
		if (radius == radius2)
			return true;
		else
			return false;
	}
	//operator for not equal to
	bool operator!=(const Circle& radius2)
	{
		if (radius != radius2)
			return true;
		else
			return false;
	}
	//operator for greater than
	bool operator>(const Circle& radius2)
	{
		if (radius > radius2)
			return true;
		else
			return false;
	}
	//operator for greater than or equal to
	bool operator>=(const Circle& radius2)
	{
		if (radius >= radius2)
			return true;
		else
			return false;
	}
	
private:
	double radius;
	static int numberOfObjects;
};


int main()
{

}