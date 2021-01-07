#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2;
clrscr();
printf("enter a number: ");
scanf("%d",&num1);
printf("enter a number: ");
scanf("%d",&num2);
if(num1%2!=0&&num2%2!=0)
{
printf("both are odd");
}
else
{
printf("both are not odd");
}
getch();
}