#include <stdio.h>

int main ()
{
    int a;
    
    printf("inserisci un numero");
    scanf("%d", &a);
    printf("a:%d\n", a);

    a = a+7;
    printf("x+7 è uguale a %d\n", a);
    a = a-7;
    printf("x-7 è uguale a %d\n", a);
    a = a/7;
    printf("x/7 è uguale a %d\n", a);
    a = a*7;
    printf("x*7 è uguale a %d\n", a);
    a = a%7;
    printf("il modulo è uguale a %d\n", a);
   
    
}

