#include<stdio.h>
#include<conio.h>
void main()
{
int ndays,yrs,months,days;
clrscr();
printf("No. of days: ");
scanf("%d",&ndays);
yrs=ndays/365;
ndays-=365*yrs;
months=ndays/30;
days=ndays-(months*30);
printf("%d years\n %d months\n %d days",yrs,months,days);
getch();
}