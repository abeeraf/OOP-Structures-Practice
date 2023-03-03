#include<iostream>

using namespace std;

struct FlightInfo
{
	private:
	int FlightNumber;
	char* Destination;
	float Distance;
	float Fuel;
	void calFuel()
	{
		if(Distance<=1000)
		Fuel=500;
		else if((Distance<=2000)&&(Distance>1000))
		Fuel=1100;
		else 
		Fuel=2200;
	}
	public:
	FlightInfo(int fn,char* des,float dis)
	{
		FlightNumber=fn;
		Destination=des;
		Distance=dis;
			
	}
	void feedInfo()
	{
		cout<<"Enter FlightNumber"<<endl;
		cin>>FlightNumber;
		cout<<"Enter Destination"<<endl;
		cin>>Destination;
		cout<<"Enter Distance"<<endl;
		cin>>Distance;
		calFuel();
			
	}
	void showInfo()
	{
		cout<<FlightNumber;
		cout<<Destination;
		cout<<Distance;
		cout<<getFuel();
	}
	float getFuel()
	{	calFuel();
		return Fuel;
	}
};



