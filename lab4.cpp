#include <iostream>
#include <math.h>

using namespace std;
int fact (int n)///Bu sikl (for) fact (faktaryalni) yozish formulasi
{
    int i;
    int res= 1;
    for (i=1;i<=n;i++)
    {
    res=res*i;
    }
    return res;
}

    float uzb(float x, float n)///uzb bu kodni nomi
{
    float s,d,f;
    int i;
    s=0;
    for ( i=1;i<n;i++);
    {
    f=fact(i-1);
    s=s+(pow(-1,i)*(1/f)*(pow(x,2*+1))/2*i+1);
    }
    d=5.5+x*x;
    return s/d;///(return) kodni qaytaradi
}
int main()///(main) Kodni boshlanishi
{
   float y,n,x;///(float) bu qoldiqli sonlar uchun ishlatiladi (double)kabi
   cout<<"input n"<<endl;///(cout) kodni ekranda ko'rsatadi
   cin>>n;
   cout<<"input x"<<endl;
   cin>>x;
   y=uzb(x,n);
   cout<<"result: "<<y<<endl;
    return 0;
}
