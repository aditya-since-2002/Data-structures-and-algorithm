#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter the two numbers:";
	cin>>a>>b;
	cout<<"enter the choices of 1 to 4:";
	cin>>c;
	switch(c)
	{
		case 1: cout<<"addition"<<a+b;
				break;
				case 2: cout<<"subtraction"<<a-b;
				break;
				case 3: cout<<"multiplication"<<a*b;
				break;
				case 4: cout<<"division"<<a/b;
				break;
				default: cout<<"wrong choice";
			}
}
