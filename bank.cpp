#include<iostream>
using namespace std;
class bank
{
	int acc;
	float acco;
    public:
    	void data();
    	void showdata();
};
void bank::data()
{
	cout<<"enter account number and account balance:"<<endl;
	cin>>acc;
	cin>>acco;
	
 }
 void bank::showdata()
 {
 	cout<<"account number:"<<acc<<endl;
 	cout<<"account balance"<<acco;
 	
 }
 int main()
 {
 	bank b;
 	b.data();
 	b.showdata();
 }
