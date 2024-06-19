#include<iostream.h>
#include<conio.h>
int main()
{
int i,n,sum=0;
cout<<"Enter Value of n:";
cin>>n;
for(i=1;i<=n;i=i+1)
sum=sum+i;
cout<<"Sum ="<<sum;
getch();
return 0;
}