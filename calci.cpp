#include<iostream>
using namespace std;
class mathematics
{
	int a,b,c;
	public:
		void calculate(int a,int b);
};
void mathematics::calculate(int a, int b)
{
	int n;
	cout<<"Enter the case";
	cin>>n;
	switch(n)
	{
		case 1: cout<<"addition:"<<a+b;
		break;
		case 2: cout<<"subtraction:"<<a-b;
		break;
		case 3: cout<<"multiplication"<<a*b;
		break;
		case 4: cout<<"Division"<<a/b;
		break;
		default: cout<<"you have entered a wrong case";
	
	}
}
int main()
{
	mathematics m1;
	m1.calculate(3,5);
	
}
