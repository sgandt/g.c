#include<stdio.h>
#include<conio.h> 
void main()
{
int a;
printf("enter the year");
scanf("%d",&a);
if(a%4==0)
{
if(a%100==0);
{
if(a%400==0)
{
printf("the year is leap year);
}
else
{
printf("not leap year");
}
}
else
{
printf("leap year");
}
}
else
printf("not leap year");
getch();
}
