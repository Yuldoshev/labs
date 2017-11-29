#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x,y;
    cout<<"x=";

if(x>3)
    y=27*(x-3)*(x-3)*(x-3);
else if(x>1)
    y=x*x*x;

else if(x>0)
    y=x;
else
    y=pow(sin(x),2)/2;
    return 0;
}
