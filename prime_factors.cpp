#include<iostream>
using namespace std;
/*int primefactors(int n)
{
  if (n<=1)
  return 1;
  for(int i=2; i*i<=n; i++)
  {
    while (n%i==0)                                    The commented code gives same output, but is less efficient.  
    {
      cout<<i<<" ";
      n=n/i;
    }
  }
  if (n>1)
  cout<<n;
}*/

int primefactors(int n)
{
  if (n<=1) return 1;
  while(n%2==0)
  {
    cout<<2<<" ";
    n=n/2;
  }
  while(n%3==0)
  {
    cout<<3<<" ";
    n=n/3;
  }
  for(int i=5; i*i<=n; i=i+6)
  {
    while(n%i==0)
    {
      cout<<i<<" ";
      n=n/i;
    }
  }
  if (n>1)
  cout<<n;
}

int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  primefactors(n);
  return 0;
}
