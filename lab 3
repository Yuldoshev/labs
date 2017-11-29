#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;

int main()
{
   int N,a,i;
   double xn,xk,dx,x,y;
   N=16;a=2;
   xn=0;xk=1;
dx=(xk-xn)/(N-1);
cout<<"            x               y "<<endl;
for(i=1;i<=N;i++){
  x=xn+(i-1)*dx;
  y=tan(a*x)+pow(tan(a+2.5),2);
  cout<<"   "<<setw(12)<<setprecision(4)<<x<<"       "<<setw(12)<<setprecision(4)<<y<<endl;

}
    return 0;
}
