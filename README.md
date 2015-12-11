# first-repository
Fibonacci Series

#include<iostream.h>
void main()
{
    int a=0,b=1,sum=0,n;
    cout<<"Enter the value of n";
    cin>>n;
    cout<<a;
    cout<<b;
    for(int i=3;i<=n;i++)
    {
      sum+=(a+b);
      a=b;
      b=sum;
      cout<<n;
      }
