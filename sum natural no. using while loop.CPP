#include<iostream.h>
#include<conio.h>
int main()
{
int i,n,sum=0;
cout<<"Enter Value n:";
cin>>n;
i=1;
while(i<=n)
{
sum=sum+i;
i=i+1;
}
cout<<sum;
getch();
return 0;
}