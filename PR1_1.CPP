#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
float x1,x2,a,b,c;
clrscr();
cout<<"\nEnter the values:";
cout<<"\na:";
cin>>a;
cout<<"\nb:";
cin>>b;
cout<<"\nc:";
cin>>c;
x1=(-b+(sqrt((pow(b,2))-(4*a*c))))/(2*a);
x2=(-b-(sqrt((pow(b,2))-(4*a*c))))/(2*a);
cout<<"\n\nx1="<<x1;
cout<<"\nx2="<<x2;
getch();
}
