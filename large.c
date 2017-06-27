#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b)
    {
    if(a>=c)
    {
        printf("%d is an largest",a);
        }
        else
        {
        printf("%d is an largest",c);
    }
    else if(b>=c)
    {
    printf("%d is an largest",b);
    else
    {
        printf("%d is an largest",c);
    }
    return 0;
}
