#include<iostream>
using namespace std;
void zerosmaller(int &x,int &y)
{
    if(x>y)
    {
        y=0;
    }
    else if(x<y) 
    {
        x=0;
    }
    else 
    {
        cout<<"Both Numbers are equal"<<endl;
    }
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    zerosmaller(a,b);
    cout<<"Value of a = "<<a<<endl;
    cout<<"Value of b = "<<b<<endl;
}