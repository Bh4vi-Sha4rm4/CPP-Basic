#include<iostream>
using namespace std;
bool isprime(int n)
{
  if (n==1) return false;
  if(n==2 || n==3) return true;
  if(n%2==0 || n%3==0) return false;
  for(int i=5; i*i<=n; i=i+6)
  {
    if(n%1==0 || n%i+2==0)
    return true;
  }
  return false;
}

int main()
{
  int a;
  cout<<"Enter the number: ";
  cin>>a;
  cout<<isprime(a);
  
}