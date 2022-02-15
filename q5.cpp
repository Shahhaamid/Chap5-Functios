#include<iostream>
using namespace std;

long hms_to_secs(int x,int y,int z)
{
    int hr=x*60*60;
    int mn=y*60;
    int secs = hr + mn + z;
    return secs;
}

int main()
{
    int hh,mm,ss;
    long t;
    cout<<"Enter the Hours Minutes and Seconds One by One"<<endl;
    cin>>hh>>mm>>ss;
    cout<<"Entered time is "<<hh<<":"<<mm<<":"<<ss<<endl;
    t=hms_to_secs(hh,mm,ss);
    cout<<"Total Secs = "<<t;
}