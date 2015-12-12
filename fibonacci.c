#include<iostream.h>
void main()
{
   int a=0,b=1,sum=0,n;
   cout<<"enter the value of n";
  cin>>n;
  
  cout<<a;
  cout<<b;
  
  for(int i=3;i<=n;i++)
  {
    sum+=(a+b);
    a=b;
    b=sum;
    cout<<sum;
    }
}
    
