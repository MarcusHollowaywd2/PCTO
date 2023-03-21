#include <stdio.h>

int main ()
{
    int x=0;
    int somma=0;
    while(x<100)
    {    
        x= x+2;
        somma+=x;
    }

    printf("%d\n", somma);
}