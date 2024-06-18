#include<iostream.h>
#include<conio.h>
int main()
{
float amt,dis,net;
cout<<"\nPlease Enter The Amount:";
cin>>amt;
dis=(amt*10)/100;
net=amt-dis;
cout<<"\nYour Amount:"<<amt;
cout<<"\nYour Discout:"<<dis;
cout<<"\nPlease Pay:"<<net;
getch();
return 0;
}