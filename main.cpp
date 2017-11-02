#include <iostream>
#include <cmath>
using namespace std;
float volume(float r)
{const float pi=3.14; return 4.0/3*pi*pow(r,3);}
int main()
{ float r1,r2,r3,z;
cout<<"enter r1 r2 r3"<<endl;
cin>>r1>>r2>>r3;
z=(volume(r1)+volume(r2)+volume(r3))/3;
cout<<"z="<<z<<endl;

    return 0;
}
