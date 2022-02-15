#include<iostream>
using namespace std;

struct Sterling{
    int pound , shilling , pence;
};

Sterling british(int p,int q,int r)
{
    Sterling s;
    s.pound = p;
    s.shilling = q;
    s.pence = r;
    return s;

}
Sterling sum(Sterling s1,Sterling s2)
{
    Sterling s;
    s.pound = s1.pound + s2.pound;
    s.shilling = s1.shilling + s2.shilling;
    s.pence = s1.pence + s2.pence; 

    if(s.pence > 11)
    {
        s.shilling += s.pence/12;
        s.pence += s.pence%12;
    }
    if(s.shilling > 19)
    {
        s.pound += s.shilling/20;
        s.shilling += s.shilling%20;
    }
    return s;
}

void display(Sterling s)
{
    cout<<s.pound<<":"<<s.shilling<<":"<<s.pence;
}
int main()
{
    int po,se,pe,pp,sp,ep;
    Sterling s1,s2,s3;
    cout<<"first case"<<endl;
    cout<<"Enter the pound"<<endl;
    cin>>po;
    cout<<"Enter the shilling"<<endl;
    cin>>se;
    cout<<"Enter the pence"<<endl;
    cin>>pe;
    cout<<endl;
    cout<<"Second case"<<endl;
    cout<<"Enter the pound"<<endl;
    cin>>pp;
    cout<<"Enter the shilling"<<endl;
    cin>>sp;
    cout<<"Enter the pence"<<endl;
    cin>>ep;
    cout<<endl;
    s1 = british(po ,se ,pe);
    s2 = british(pp,sp,ep);
    s3 = sum(s1,s2);
    cout<<"First value = ";
    display(s1);
    cout<<endl;
    cout<<"Second value = ";
    display(s2);
    cout<<endl;
    cout<<"Sum = ";
    display(s3);
    


    

}
