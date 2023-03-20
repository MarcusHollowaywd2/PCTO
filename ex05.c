#include <stdio.h>

int main ()
{
    int a;

    printf("inserisci un numero");
    scanf("%d", &a);
    printf("a:%d\n", a);

    if(a>50)
    {
        a = a/2;
        printf("x è uguale a %d\n", a);
    } 
    else
    {
        a = a*3;
        printf("x è uguale a %d\n",a);
    }
    
}