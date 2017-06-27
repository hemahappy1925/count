#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
scanf("%d",&a);
if(a>0)
{
print("a is positive");
}
else if(a<0)
{
printf("a is negative");
}
else
{
printf("a is zero");
}
getch();
}
