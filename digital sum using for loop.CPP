#include<iostream.h>
#include<conio.h>
int main(){
int i,sum=0;
cout<<"Enter Value;";
cin>>i;
for (;i>0;i=i/10)
sum = sum+i%10;
cout<<"Digit Some="<<sum;
getch();
return 0;
}