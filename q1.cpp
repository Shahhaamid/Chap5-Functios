#include<iostream>
using namespace std;
float circarea (float x, float y)
{
    float area = x * y * y;
    return area;
}

int main()
{
    const float PI = 3.14159F;
    float rad,arc;
    cout<<"Enter the Radius"<<endl;
    cin>>rad;
    arc = circarea(PI,rad);
    cout<<"Area = "<<arc;
}
