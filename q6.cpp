#include<iostream>

using namespace std;
struct Address
{
	private:
	int HouseNumber;
	int street;
	int ApartmentNumber;
	char* city;
	char* state;
	int PostalCode;
	public:
	Address()
	{	
		HouseNumber=0;
		street=0;
		//ApartmentNumber;
		city="NULL";
		state="NULL";
		PostalCode=0;
	}
	Address(int h,int s,int an,char* c,char* state,int pc)
	{	
		HouseNumber=h;
		street=s;
		ApartmentNumber=an;
		city=c;
		state=state;
		PostalCode=pc;
	}
	void setPostalCode(int x)
	{PostalCode=x;}
	void print()
	{
		cout<<street<<endl;
		cout<<city<<" "<<state<<" "<<PostalCode<<endl;
	}

	bool compareTO(Address second)
	{
		if(PostalCode<second.PostalCode)
		return 1;
		else 
		return 0;
	}
};


