#include<iostream>
using namespace std;
class test
{
	int a;
	float b;
	public:
		void f(int d)
		{
			a=d;
			cout<<"Number=";
		}
		float f2()
		{
			cout<<"\nEnter Data";
			cin>>b;
			return b;
		}
};
int main()
{
	test o1,o2;
	float x;
	o1.f(12);
	x=o2.f2();
	cout<<"you entered"<<x;
}
