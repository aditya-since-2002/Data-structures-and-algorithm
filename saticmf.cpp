#include<iostream>
using namespace std;
class Demo
{
static int x;
static int y;
static int a;
public:
static void printf(int m)
{ a=m;
cout<<"\nValue of x:"<<x;
cout<<"\nvalue of y:"<<y<<endl;
cout<<"\nvalue of a:"<<a<<endl;
}
};
int Demo::x=10;
int Demo::y=20;
int main()
{
Demo ob;
ob.printf(30); //the member function is called with the help of object
Demo::printf(30); //the members function is called using class
}
