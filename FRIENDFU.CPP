//program demostrate to friend function
#include<iostream.h>
#include<conio.h>
class demo
{
	private:
	     int a;
	public:
	     friend void get(demo s);
};
void get(demo s)
{
	cout<<"enter value of a";
	cin>>s.a;
}
void main()
{
	clrscr();
	demo d;
	get(d);
	getch();
}