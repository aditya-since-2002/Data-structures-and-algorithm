#include<iostream>
using namespace std;
class student
{
    protected:
    int roll_no;
    public:
    void getro(int a)
    {
    roll_no=a;
    }
    void putno()
    {
    cout<<"\nRoll number= \t"<<roll_no;
    }
};
class test:public student
{
    protected:
    float part1,part2;
    public:
    void getmarks(float x,float y)
    {part1=x;
    part2=y;
    }
    void showmarks()
    {
    cout<<"\nMarks in part1:\t"<<part1;
    cout<<"\nMarks in part2:\t"<<part2;
    }
};
class sports: public student
{
    protected:
    float score;
    public:
    void getscore(float s)
    {score=s;
    }
    void showscore()
    {
    cout<<"\nThe score is:\t"<<score;
    }
};
class result: public test,public sports
{
    protected:
    float total;
    public:
    void display();
};
void result::display()
{
    total=part1+part2+score;
void    putno();
void    showmarks();
void    showscore();
    }
int main()
{
result student1;
student1.getro(100);
sudent1.getmarks(50.5,65.2);
stdent1.getscore(10.5);
student1.display();
return 0;
}
