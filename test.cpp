#include<iostream>
using namespace std;
int sum(int x, int y, int z)
{
  cout<<"Enter two number:";
  cin>> x >> y;
  z = x + y;
  return z;
}
int main()
{
  int s=0;
  int a;
  int b;
  sum(a,b,s);
  cout<<"The sum is:"<<sum;
  return 0;
}
