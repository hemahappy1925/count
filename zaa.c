#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(((a>='a')&&(a>='z'))||(a>='A')&&(a>='Z'))
    {
        printf("%c is an alphabet",a);
    
    }
    else
    {
        printf("%c is an not alphabet",a);
    }
    return 0;
}
