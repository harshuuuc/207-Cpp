//program to demonstrate the function template
#include<iostream.h>
#include<conio.h>
void swap(float a,float b)
{
	float t;
	t=a;
	a=b;
	b=t;
	cout<<"A=>"<<a<<endl;
	cout<<"B=>"<<b<<endl;
}
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	cout<<"A=>"<<a<<endl;
	cout<<"B=>"<<b<<endl;
}


