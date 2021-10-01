#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
     float pi=3.14;
    long double r,q,v;
    long double e0=8.85e-12;
    cout<<"Enter the value of charge in coloumb: ";
    cin>>q;
    cout<<"Enter the value of distance in cm= ";
    cin>>r;
    cout<<"To find the value of potential:\n";
    v=(1/(4*pi*e0))*(q/r);
    cout<<"The value of potential differnce is: "<<v;
    getch();
}
