#include<iostream>
using namespace std;
class circle
{
	float r,a,c;   //r satnds for radius a stands for area c stands for circumference
	public:
		void area(float rad)
		{   
			r=rad;
			
			a=3.14*r*r;
			cout<<"\nArea of circle:"<<a<<endl;
		}
		void circumference(float ra)
		{   
			r=ra;
			c=2*3.14*r;
			cout<<"\nCircumference of circle:"<<c<<endl;
		}
};
int main()
{
	circle c1,c2,c3;
	c1.area(3);
	c1.circumference(3);
	c2.area(4);
	c2.circumference(4);
	c3.area(5);
	c3.circumference(5);
	
	}
