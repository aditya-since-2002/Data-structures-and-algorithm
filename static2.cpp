#include<iostream>
using namespace std;
class Box
{ int x;
int c;
public:
static int count;
void f1(int a)
{
c=a;
count = count*2;
c=c*2;
cout<<"\nstatic variable members="<<Box::count;
cout<<"\tnon-static data members="<<c<<endl;
}
};
int Box::count=1;
int main()
{
Box b1,b2,b3,b4;
b1.f1(1);
b2.f1(1);
b3.f1(1);
b3.f1(1);

}
