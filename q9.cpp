#include<iostream>
using namespace std;

struct Rectangle
{
	private:
	float length;
	float width;

	public:
	Rectangle()
	{
		length=0;
		width=0;
	}
	Rectangle(int l, int w)
	{
		length=l;
		width=w;
	}
	void setLength(float l)
	{
		length=l;
	}
	void setWidth(float w)
	{
		width=w;
	}
	float perimeter()
	{
		return (2*length+2*width);
	}
	float area()
	{
		return (length*width);
	}
	void show()
	{
		cout<<"Length is:"<<length<<endl;
		cout<<"Width is:"<<width<<endl;
	}
	int sameArea(Rectangle sec)
	{
		if (area()==sec.area())
		return 1;
		else 
		return 0;
	}
};
