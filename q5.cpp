#include<iostream>
#include<cstring>
using namespace std;

struct Employee2
{
	private:
	char* name;
	float HourlyWage;
	float WorkedHours;
	float ExtraHours;
	public:
	Employee2()
	{
		HourlyWage=0;
		WorkedHours=0;
		ExtraHours=0;	
	}
	Employee2(char* nm,float hw,float wh,float ex)
	{
		name=nm;
		HourlyWage=hw;
		WorkedHours=wh;
		ExtraHours=ex;
	}
	float wageCalculator()
	{
		/*cout<<"Hours employee worked in the past week?(in fractional hours)"<<endl;
		cin>>WorkedHours;*/
		if(WorkedHours>40)
		return (HourlyWage*(40)+ExtraHours*HourlyWage*1.5);
		else 
		return (HourlyWage*WorkedHours);
	}
	void setName(char* nm)
	{name=nm;}
	void hourlyWage(float hw)
	{HourlyWage=hw;}
	void setWorkedHours(float wh)
	{WorkedHours=wh;}
	void setExtraHours(float ex)
	{ExtraHours=ex;}

	void print();
};
void Employee2:: print()
	{
		cout<<"Please enter employee's name then press Enter :";
		char nams[30];
		cin.get(nams,30);name=nams;	
		cout<<endl;	
		cout<<"Please enter hourly wage then press Enter :";
		cin>>HourlyWage;
		cout<<endl;
		cout<<"Please enter hours worked then press Enter:";
		cin>>WorkedHours;
		cout<<endl;
		cout<<"Paycheck for employee";
		for(int x=0;name[x]!='\0';x++)
		cout<<name[x];
		cout<<endl;
		cout<<endl;
		cout<<"Hours worked:"<<WorkedHours;
		cout<<endl;
		cout<<"Hourly wage:"<<HourlyWage;
		cout<<endl;
		cout<<endl;
		cout<<"Total payment:"<<wageCalculator();
		cout<<endl;
	}
