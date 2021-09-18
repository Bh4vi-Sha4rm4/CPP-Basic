#include<iostream>
using namespace std;
int gcd(int a, int b)
{
  if (b==0)
  return a;
  else 
  return gcd(b, a%b);
}
int lcm(int a,int b)
{
   return a*b/gcd(a,b);
   
}
int main()
{
  int a,b;

cout<<"Enter two numbers: ";
cin>>a>>b;
cout<<"LCM of given numbers: "<< lcm(a,b);
}


// The above code is based on formula: a*b= gcd(a,b)*lcm(a,b)