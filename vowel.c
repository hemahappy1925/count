#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if((a>='a')&&(a>='e')&&(a>='i')&&(a>='o')&&(a>='u'))
    {
        printf("%c is an vowel",a);
    
    }
    else
    {
        printf("%c is an consonant",a);
    }
    return 0;
}
