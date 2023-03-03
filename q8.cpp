#include<iostream>
using namespace std;

class Student
{
	private:
	char* RollNumber;
	char* Name=new char[];
	int Batch;
	int Courses_Code[5];
	char* Courses_Name[5];
	char Courses_Grades[5];
	float CGPA;
	char* Degree;
	char* DateOfBirth;
	
	public:
	Student()
	{
		RollNumber=0;
		Name[0]='\0';
		Batch=0;
		Courses_Code[0]=0;
		Courses_Name[0]='\0';
		Courses_Grades[0]='\0';
		CGPA=0.0;
		Degree[0]='\0';
		DateOfBirth[0]='\0';
	}		
	Student(char*rn,char*n,int b,int* cc,char*cn,char*cg,float cgpa,char*deg,char*dob)
	{
		RollNumber=rn;
		Name=n;
		Batch=b;
		Courses_Code=cc;
		Courses_Name=cn;
		Courses_Grades=cg;
		CGPA=cgpa;
		Degree=deg;
		DateOfBirth=dob;
	}
	//Don't get the difference between set values and constructor.
	void setValues(char*rn,char*n,int b,int* cc,char* cn,char*cg,float cgpa,char*deg,char*dob)
	{
		RollNumber=rn;
		Name=n;
		Batch=b;
		{Courses_Code=cc;
		Courses_Name=cn;
		Courses_Grades=cg;}
		CGPA=cgpa;
		Degree=deg;
		DateOfBirth=dob;
	}
	void setRollNumber(char* rn)
	{
		RollNumber=rn;
	}
	void setName(char* n)
	{
		Name=n;
	}
	void setRollNumber(int b)
	{
		Batch=b;
	}
	void setCourses_Code(int* cc)
	{
		for(int x=0;x<5;x++)
		Courses_Code[x]=cc[x];
	}
	void setCourses_Namer(char* cn)
	{
		Courses_Name=cn;
	}
	void setCourses_Grades(char* cg)
	{
		Courses_Grades=cg;
	}
	void setCGPA(float cgpa)
	{
		CGPA=cgpa;
	}
	void setDegree(char* deg)
	{
		Degree=deg;
	}
	void setDateOfBirth(char* dob)
	{
		DateOfBirth=dob;
	}

	void print()
	{
	///////line 1///////////
	int count=0;
	for (int x=0;Name[x]!='\0';x++)
	count++;
	cout<<"Student Name:     ";
	for (int x=0;Name[x]!='\0';x++)
	cout<<Name[x];
	for (int x=0;x==50-count;x++)
	cout<<" ";
	cout<<"Roll Number:     ";
	for (int x=0;Name[x]!='\0';x++)
	cout<<RollNumber[x];
	cout<<endl;
	cout<<"Date of Birth:   ";
	for (int x=0;Name[x]!='\0';x++)
	cout<<DateOfBirth[x];
	}

};







