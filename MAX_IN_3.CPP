#include<iostream.h>
#include<conio.h>
int main()
{
int a,b,c;
cout<<"\nEnter Three Value:";
cin>>a>>b>>c;
if (a>b&&a>c)
cout<<"\na is greater than b and c";
else if (b>c&&b>a)
cout<<"\nb is greater than a and c";
else
cout<<"\nc is greater than a and b";
getch();
return 0;
}