#include<iostream>
using namespace std;
int gcd(int a, int b)
{
  if (b==0)
  return a;
  else 
  return gcd(b, a%b);
}
int main()
{
  int a,b;

cout<<"Enter two numbers: ";
cin>>a>>b;
cout<<gcd(a,b);
}

// The code is based on Euclidean Algorithm(best approach)