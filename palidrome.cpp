#include<iostream>
using namespace std;
int main()
{
	int n,r,temp,sum=0;
	cout<<"enter the number:";
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	cout<<"Number is a palidrome:";
	else
	cout<<"Number is not a palidrome";
	return 0;	
}
