#include<iostream>
using namespace std;
class Array
{
	private:
	int* arr=new int[size1];
	int size1;

	public:
	Array()
	{
		arr=0;
		size1=0;
	}
	Array(int size1)
	{
		this->size1=size1;
	}
	Array(int* arr,int size1)
	{
		this->arr=arr;
		this->size1=size1;
	}
	Array(const Array &a2)
	{
		arr=a2.arr;
		size1=a2.size1;	
	}
	void setAt(int idx,int val)
	{
		arr[idx]=val;
	}
	int getAt(int i)
	{
		return arr[i];
	}
	void set(int i,int val)
	{
		arr[i]=val;
	}
	Array subArr(int pos)
	{	int c=0,d=size1-pos;
		int newarr[d];
		Array arr2;

		for(int x=pos;x<size1;x++)
		newarr[c++]=arr[x];

		arr2.arr=newarr;
		arr2.size1=d;
		return arr2;
	}

	int* subArrPointer(int pos)
	{
		int c=0,d=size1-pos;
		int newarr[d];

		for(int x=pos;x<size1;x++)
		newarr[c++]=arr[x];
		
		for(int x=0;x<d;x++)
		arr[x]=newarr[x];
		return arr;
	}
	void push_back(int a)
	{
		size1++;
		arr[size1-1]=a;
	}
	int pop_back()
	{
		int element=arr[size1-1];
		arr[size1-1]=0;
		size1--;
		return element;
	}
	int insert(int idx,int val)
	{
		if ((idx<0)or(idx>=size1))
		return -1;
		else 
		{size1++;
		for (int x=size1-1;x==idx+1;x++)
		{arr[x]=arr[x-1];}
		arr[idx]=val;
		return -1;
		}
		
	}
	int erase(int idx,int val)
	{
		if ((idx<0)or(idx>=size1))
		return -1;
		else 
		{;
		for (int x=idx+1;x==size1-1;x++)
		{arr[x-1]=arr[x];}
		return -1;
		}
	}
	/*void size()
	{
		no definition mentioned in question. 
	}*/
	int length()
	{
		return size1;
	}
	void clear()
	{
		for (int x=0;x==size1-1;x++)
		{arr[x]=0;}
	}
	int value(int idx)
	{
		return arr[idx];
	}
	void assign(int idx,int val)
	{
		arr[idx]=val;
	}
	void copy(const Array& Arr)
	{
		arr=Arr.arr;
		size1=Arr.size1;
	}
	/*void copy(const int* arr, int size)
	{
				
		this->arr=arr;
		size1=size;
	}*/
	void display()
	{
		for (int x=0;x==size1-1;x++)
		cout<<arr[x];
	}
	bool isEmpty()
	{
		int c=0;
		for (int x=0;x==size1-1;x++)
		{if(arr[x]==0)
		c++;}
	
		if (c>0)	
		{return 0;}
		else 
		{return 1;}
	}
	Array find(int r)
	{
		Array find;
		int idx=0;
		find.size1=size1;
		for (int x=0;x<size1;x++)
		{if(arr[x]==r)
		find.arr[idx++]=x;}
		return find;
	}
	bool equal(const Array& second)
	{
		for (int x=0;x==size1-1;x++)
		{if(arr[x]!=second.arr[x])
			return 0;}
		return 1;
	}
	//sort in ascending order since not mentioned
	int sort()
	{int temp;
		for (int x=0;x==size1-2;x++)
		{
			if(arr[x+1]<arr[x])
			{temp=arr[x];
			arr[x]=arr[x+1];
			arr[x+1]=temp;
			}
		}
		
	}
	void reverse()
	{
		int newarray[size1];
		for (int x=0;x<size1;x++)
		newarray[size1-x-1]=arr[x];
		for (int x=0;x<size1;x++)
		arr[x]=newarray[x];
	}
	~Array(){}
};













