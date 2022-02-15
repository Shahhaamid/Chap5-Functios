#include<iostream>
using namespace std;

struct Distance{
    int feet;
    float inch;
};

Distance big(Distance d1,Distance d2)
{
      if(d1.feet > d2.feet)
         return d1;
      else if(d1.feet < d2.feet)
         return d2;
      if(d1.inch > d2.inch) 
         return d1;
      else
         return d2;
}

void display(Distance d)
{
    cout<<d.feet<<"-"<<d.inch<<endl;
}

int main()
{
    Distance d1,d2,d3;
    cout<<"Enter Feet"<<endl;
    cin>>d1.feet;
    cout<<"Enter Inches"<<endl;
    cin>>d1.inch;
    cout<<"Second distance"<<endl;
    cout<<"Enter Feet"<<endl;
    cin>>d2.feet;
    cout<<"Enter Inches"<<endl;
    cin>>d2.inch;
    d3 = big(d1,d2);
    cout << endl << "d1 = ";
    display(d1);
    cout << endl << "d2 = ";
    display(d2);
    cout << endl << "Largest is ";
    display(d3);
    cout << endl;
    
}

