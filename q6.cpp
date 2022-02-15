#include<iostream>
using namespace std;

struct Time
{
    int hours,minutes,seconds;
};

long time_to_secs(Time t)
{
  long p = t.hours * 3600 + t.minutes * 60 + t.seconds;
    return p;
}
Time secs_to_time(long d)
{
    Time t2;
    int a,b,c;
    b = d/60;//minutes//
    a = b/60;//hours//
    c = d%60;//seconds//
    b = b%60;
    t2.hours = a;
    t2.minutes = b;
    t2.seconds = c;
    return t2;
}

int main()
{
    Time t1,t2;

    cout<<endl;
    cout<<"Enter the Hours"<<endl;
    cin>>t1.hours;
    cout<<"Enter the minutes"<<endl;
    cin>>t1.minutes;
    cout<<"Enter the seconds"<<endl;
    cin>>t1.seconds;
    cout<<endl;

    int s,ss;

    s = time_to_secs(t1);
    cout<<"Total seconds = "<<s<<endl;
    cout<<endl;

    cout<<"Enter the Seconds"<<endl;
    cin>>ss;

    t2 = secs_to_time(ss);
    cout<<" Time = "<<t2.hours<<":"<<t2.minutes<<":"<<t2.seconds;   
}

