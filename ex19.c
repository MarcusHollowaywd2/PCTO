#include <stdio.h>

int main()
{
     char x;
    printf("inserisci una lettera");
    scanf(" %c", &x);
    
    if(x>64 && x<91)
    {
        printf("è maiuscolo\n");
    }
    if (x>96 && x<123)
    {
        printf("è minuscolo\n");
    }
    else
    {
        printf("é un carattere speciale\n");
    }
    if (x>47 && x<58)
    {
        printf("é un numero\n");
    }
}