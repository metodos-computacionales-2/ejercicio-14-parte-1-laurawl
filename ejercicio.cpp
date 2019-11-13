#include <iostream>
#include <cmath>
using namespace std;

double f(double y, double t);
double euler(double y, double t, double h);    
    
double f(double y, double t)
{
    return sin(t);
}
double euler(double y, double t, double h)
{
    return y+h*f(y,t);
}
int main()
{
    double y0=1,t0=0,h=0.001;
    for(int i=0; i<100;i++)
    {
      cout<<t0<<" "<<y0<<endl;
       t0+=h;
       y0=euler(y0,t0,h);
    }
   return 0;
}