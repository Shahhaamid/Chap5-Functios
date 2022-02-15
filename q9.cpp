#include<iostream>
using namespace std;

struct Time
{
    int hours,miniutes,seconds;
};

void tim(Time &t,Time &x)
{
    Time t3;
    t3 = t;
    t = x;
    x = t3; 
}


int main()
{
    Time t1,t2;
    cout<<"For t1"<<endl;
    cout<<"Enter the hours"<<endl;
    cin>>t1.hours;
    cout<<"Enter the Minutes"<<endl;
    cin>>t1.miniutes;
    cout<<"Enter the seconds"<<endl;
    cin>>t1.seconds;
    cout<<endl;
    cout<<"For t2"<<endl;
    cout<<"Enter the hours"<<endl;
    cin>>t2.hours;
    cout<<"Enter the Minutes"<<endl;
    cin>>t2.miniutes;
    cout<<"Enter the seconds"<<endl;
    cin>>t2.seconds;
    cout<<endl;
    cout<<"Time in t1 = "<<t1.hours<<":"<<t1.miniutes<<":"<<t1.seconds<<endl;
    cout<<"Time in t2 = "<<t2.hours<<":"<<t2.miniutes<<":"<<t2.seconds<<endl;
    tim(t1,t2);
    cout<<"After swapping"<<endl;
    cout<<"Time in t1 = "<<t1.hours<<":"<<t1.miniutes<<":"<<t1.seconds<<endl;
    cout<<"Time in t2 = "<<t2.hours<<":"<<t2.miniutes<<":"<<t2.seconds<<endl;

}