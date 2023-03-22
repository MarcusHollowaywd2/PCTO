#include <stdio.h>

int main()
{
    int x;
    int y;
    int somma;
    
    somma =0;
    printf("inserisci un numero");
    scanf("%d", &x);

    while(x>0)
    {
        printf("inserisci un numero");
        scanf("%d", &y);
        somma = somma+y;
        x= x-1;
    
    }
    printf("la somma di tutti i numeri che ho inserito è %d", somma);
}