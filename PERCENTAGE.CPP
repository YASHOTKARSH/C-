#include<iostream.h>
#include<conio.h>
int main()
{
int a,b,c,d,e,total;
float per;
cout<<"\nEnter Total Subjects Marks";
cout<<"\nHindi=";
cin>>a;
cout<<"English=";
cin>>b;
cout<<"Maths=";
cin>>c;
cout<<"SST=";
cin>>d;
cout<<"Sanskrit=";
cin>>e;
total=a+b+c+d+e;
per=(total*100)/500;
cout<<"\nYour Percentage is"<<per;
getch();
return 0;
}