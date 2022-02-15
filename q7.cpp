#include<iostream>
#include<cmath>
using namespace std;
double power(double x,int y)
{
    return pow(x,y);
    
}
char power(char x,int y)
{
    return pow(x,y);
}
int power(int x,int y)
{
    return pow(x,y);
}
long power(long x,int y)
{
    return pow(x,y);
}
float power(float x,int y)
{
    return pow(x,y);
}

int main()
{
    int p=2,ch,ab,ac;
    char pp,ff;
    float hh,ss;
    double n,res;
    long m,b;
    cout<<"Select the datatype"<<endl;
    cout<<"1.Char"<<endl<<"2.Float"<<endl<<"3.Int"<<endl<<"4.Long"<<endl<<"5.Double"<<endl;
    cout<<endl;
    cin>>ch;
    if(ch==1)
    {
        cout<<"Enter the char Value"<<endl;
        cin>>pp;
        ff=power(pp,p);
        cout<<"Output = "<<ff;
    }
    else if(ch==2)
    {
        cout<<"Enter the float value"<<endl;
        cin>>hh;
        ss=power(hh,p);
        cout<<"Output = "<<ss;
    }
    else if(ch==3)
    {
        cout<<"enter the int value"<<endl;
        cin>>ab;
        ac = power(ab,p);
        cout<<"Output = "<<ac;
    }
    else if(ch==4)
    {
        cout<<"Enter the Long value"<<endl;
        cin>>m;
        b = power(m,p);
        cout<<"Output = "<<b;
    }
    else if(ch==5)
    {
        cout<<"Enter the double value"<<endl;
        cin>>n;
        res = power(n,p);
        cout<<"output = "<<res;
    }
    else
    {
        cout<<"Wrong Input";
    }
}