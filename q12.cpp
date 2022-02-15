#include<iostream>
using namespace std;

struct frac{
    int num,den;
};
frac add(frac f1,frac f2)
{
    frac f;
    f.num = (f1.num * f2.den) + (f1.den * f2.num);
    f.den = (f1.den * f2.den);
    return f; 

}
frac sub(frac f1,frac f2)
{
    frac f;
    f.num = (f1.num * f2.den) - (f1.den * f2.num);
    f.den = (f1.den * f2.den);
    return f;
}
frac mul(frac f1,frac f2)
{
    frac f;
    f.num = (f1.num * f2.num);
    f.den = (f1.den * f2.den);
    return f;
}
frac div(frac f1,frac f2)
{  
    frac f;
    f.num = (f1.num * f2.den);
    f.den = (f1.den * f2.num);
    return f;
}

int main()
{
    frac f1,f2,f3;
    int n;
    char c;
    cout<<"Which operation do you want to perform "<<endl;
    cout<<"1.+"<<endl<<"2.-"<<endl<<"3.*"<<endl<<"4./"<<endl;
    cin>>n;
    if(n==1)
    {
        cout<<"Addition"<<endl;
        cout<<"Enter the first fraction"<<endl;
        cin>>f1.num>>c>>f1.den;
        cout<<"Enter the second Fraction"<<endl;
        cin>>f2.num>>c>>f2.den;
        f3 = add(f1,f2);
        cout<<"sum = "<<f3.num<<c<<f3.den;
    }
    else if(n==2)
    {
         cout<<"Subtraction"<<endl;
        cout<<"Enter the first fraction"<<endl;
        cin>>f1.num>>c>>f1.den;
        cout<<"Enter the second Fraction"<<endl;
        cin>>f2.num>>c>>f2.den;
        f3 = sub(f1,f2);
        cout<<"Subtraction = "<<f3.num<<c<<f3.den;

    }
    else if(n==3)
    {
         cout<<"Multiplication"<<endl;
        cout<<"Enter the first fraction"<<endl;
        cin>>f1.num>>c>>f1.den;
        cout<<"Enter the second Fraction"<<endl;
        cin>>f2.num>>c>>f2.den;
        f3 = mul(f1,f2);
        cout<<"Mutiplication = "<<f3.num<<c<<f3.den;

    }
    else if(n==4)
    {
         cout<<"Division"<<endl;
        cout<<"Enter the first fraction"<<endl;
        cin>>f1.num>>c>>f1.den;
        cout<<"Enter the second Fraction"<<endl;
        cin>>f2.num>>c>>f2.den;
        f3 = div(f1,f2);
        cout<<"Division = "<<f3.num<<c<<f3.den;

    }
    else
    {
        cout<<"Wrong Input";
    }
}