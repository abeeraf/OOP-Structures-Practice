#include<iostream>
using namespace std;

struct Car
{
	private:
	float feff; //liters/km
	float amofuel;

	public:
	Car(){amofuel=0;feff=10;}
	Car(int fe,int amo):feff(fe)
	{
		amofuel=amo;
			
	}
	float drive(float dis)
	{
		amofuel-=dis/feff;
		//return amofuel;
	}
	float getFuelLevel()
	{
		return amofuel;
	}
	void tank (float add)
	{
		amofuel+=add;
	}
};


	

	
