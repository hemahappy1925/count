#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if((a%4==0)||(a%100==0)||(a%400==0))
    {
        printf("%d is leap year",a);
    
    }
    else
    {
        printf("%d is an not",a);
    }
    return 0;
}
