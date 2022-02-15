#include<iostream>
using namespace std;
int count = 0;
void globalvar()
{
    count++;
}
int localvar()
{
    static int Ccount = 0;//memory is kept for the lifetime of a program//
    Ccount ++;
    return Ccount;
}

int main()
{
    static int Ccount = 0;
    for(int j=0;j<10;j++)
    {
        globalvar();
    }
    for(int i=0;i<5;i++)
    {
        Ccount = localvar();
    }

    cout<<"Global variable count = "<<count<<endl;
    cout<<"Local Variable Count = "<<Ccount<<endl; 
}