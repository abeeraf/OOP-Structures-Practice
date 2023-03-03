#include<iostream>
#include<cstring>
using namespace std;

struct Employee
{
	private:
	char* name;
	double salary;

	public:
	Employee()
	{
		salary=0;	
	}
	Employee(char*n, double s)
	{
		name=n;
		salary=s;
	}

	void setName(char* a)
	{
		name=a;
	}
	char* getName()const
	{
		return name;
	}
	
	void setSalary(double s)
	{
		salary=s;
	}
	double getSalary()
	{
		return salary;
	}
};

void TestEmployee()
{
	
	cout<<"Creating a new Employee."<<endl;
	cout<<"Please type the name:";

	char nams[30];
	cin.get(nams,30);

	cout<<"Please specify the salary:";
	double s;
	cin>>s;
	cout<<"New employee has been created."<<endl;
	cout<<"Name of employee:";

	Employee Employee1(nams,s);
	
	char* nam=Employee1.getName();
	for(int x=0;nam[x]!='\0';x++)
	cout<<nam[x];
	cout<<endl;
	cout<<"Salary: "<<Employee1.getSalary();
	cout<<endl<<"Thank you for testing the structure Employee."<<endl;
}










