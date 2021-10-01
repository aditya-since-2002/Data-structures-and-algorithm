#include<iostream>
using namespace std;
void volume(int l=10,int w=10,int h=10)
{
cout<<"volume="<<l*w*h<<endl;
}
int main()
{
volume();
volume(4);
volume(4,5);
volume(8,5,6);

}
