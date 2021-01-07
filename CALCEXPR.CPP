/*((a*b)/c+(a+b-c))*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
float x,y,z;
clrscr();
printf("enter a,b,c values\n");
scanf("%d %d %d",&a,&b,&c);
x=(a*b)/c;
y=(a+b-c);
z=x+y;
printf("The value of given expression is:%2f",z);
getch();
}