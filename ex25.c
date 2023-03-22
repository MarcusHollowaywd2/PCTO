#include <stdio.h>

int cambio (char x)
{
    char z;
    if(x>64 && x<91)
    {
    z= x+32;
    printf("%c\n", z);
    }
    if(x>97 && x<193)
    {
    z= x-32;
    printf("%c\n", z);
    }
    else
    {
    printf("%c\n", x);
    }
    return(z);
}

int main ()
{
    char y;
    printf("inserisci una lettera");
    scanf("%c", &y);
    
    char x = cambio (y);

}