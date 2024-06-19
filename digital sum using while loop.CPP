#include<iostream.h>
#include<conio.h>
int main(){
int i,sum=0;
cout<<"Enter value to find digit sum=";
cin>>i;
while (i>0)
{sum = sum+i%10;
i=i/10;
}
cout<<"Digit Some="<<sum;
getch();
return 0;
}