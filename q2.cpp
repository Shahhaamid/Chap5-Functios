#include<iostream>
#include<cmath>
using namespace std;
double power(double x,int y)
{
    double p = pow(x,y);
    return p;
}
int main()
{
    int p=2;
    char pp;
    double n,res;
    cout<<"Enter the Value of N"<<endl;
    cin>>n;
    cout<<"By default the value of power is 2 Do u want to change(Y/N) ?"<<endl;
    cin>>pp;
    if(pp=='Y')
    {
        cout<<"Enter the value of Power"<<endl;
        cin>>p;
        res=power(n,p);
    }
    else if(pp=='N')
    {
        cout<<"Taking Default value"<<endl;
        res=power(n,p);
    }
    else
    {
        cout<<"Wrong Input";
    }
    cout<<"Answer = "<<res;
}