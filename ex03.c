#include <stdio.h>

int main ()
{
    int x;
    int y;

    printf("inserisci due numeri");
    scanf("%d %d", &x, &y);
    printf("x: %d\ny:%d\n", x, y);
    int somma = x+y;
    int differenza = x-y;
    int moltiplicazione = x*y;
    int divisione = x/y;
    int resto = x%y;

    printf("la somma di x+y è %d\n", somma);
    printf("la differenza di x-y è %d\n", differenza);
    printf("la moltiplicazione di x*y è %d\n", moltiplicazione);
    printf("la divisione di x/y è %d\n", divisione);
    printf("il resto della divisione tra x e y è %d\n", resto);

}