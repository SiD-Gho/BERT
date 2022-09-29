#include<iostream.h>
using namespace.std
int sum(int x, int y, int z)
{
  cout<<"Enter two number:";
  cin>> x >> y;
  z = x + y;
  return z;
}
void main()
{
  int sum=0;
  int a;
  int b;
  sum(a,b,sum);
  cout<<"The sum is:"<<sum;
}
