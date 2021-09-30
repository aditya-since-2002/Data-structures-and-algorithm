#i nnclude<iostream>
using namespace std;
class student
{
	int reg;
	float cgpa;
	public:
		void getdata()
		{
	cout<<"enter reg no:";
	cin>>reg;
	cout<<"enter cgpa:";
	cin>>cgpa;
};
		void putdata()
		{
	cout<<"reg no:"<<reg<<endl<<"cgpa:"<<cgpa;
	
};
		
};
int main()
{
	student s1;   
	s1.getdata();
	s1.putdata();
	
}
