#include<iostream>
using namespace std;

int sum()
{
	int a=7;
	int b=5;
	int c;
	c=a+b;
	cout<<" the value c is ="<<c<<endl;
}
int sub()
{
	int a=76;
	int b=43;
	int c;
	c=a-b;
	cout<<"the value of c is="<<c<<endl;
}
int mul()
{
   	int a=76;
	int b=43;
	int c;
	c=a*b;
	cout<<"the value of c is="<<c<<endl;	
}
float div()
{
	float a=76.6;
	float b=43.5;
	float c;
	 c=a/b;
	cout<<"the value of c is="<<c<<endl;
}
int main()
{
	sum();
	sub();
	mul();
	div();
}
