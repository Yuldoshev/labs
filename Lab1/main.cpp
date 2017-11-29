#include <iostream>
#include<math.h>
using namespace std;
///Bu mani birinchi yozgan kodim
int main()
{double x;
double y;
cout<<"vvedi x ";
cin>>x;
y=(4*sin(x)*sin(x)+3)/2;
cout<<"x="<<x<<endl;
  cout<<"y="<<y<<endl;


  double c;
  double g, a,b;
  a=3.2;
  b=6.8;
  g=a*(3*pow(y,2)-1./3);
  c=pow(sin(g),2);
  double z=(c+11.75)/(c+b);
  cout<<"z="<<z<<endl;
    return 0;
}
