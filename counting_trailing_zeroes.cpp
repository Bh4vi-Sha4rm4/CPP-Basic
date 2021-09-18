#include<iostream>
using namespace std;
int factorial(int n)
{
  if(n==0)
  return 1;
  else
  return n*factorial(n-1);
}
int number_of_zero(int n)
{
  int count=0;
  for(int i=5; i<=n; i=i*5)
  {
    count=count+n/i;

  }
  return count;
}
int main()
{
  int a;
  cout<<"Enter the number: ";
  cin>>a;
  int fact= factorial(a);
  //cout<<"Factorial of "<< a <<" is: "<<fact<<endl;
  cout<<"Number of zeroes: "<< number_of_zero(a);
  return 0;

}