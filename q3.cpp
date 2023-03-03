

struct Circle
{
	private:
	float radius;
	public:
	Circle(){radius=0;}
	Circle(float r){radius=r;}
	float getArea()
	{
		return 3.14*radius*radius;
	}
	float getCircumference()
	{
		return 3.14*radius*2;
	}
};
	
