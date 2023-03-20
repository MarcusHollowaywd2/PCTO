#include <stdio.h>

int main ()
{
    int x;
    int y;
    int z;

    printf("inserisci 3 numeri");
    scanf("%d %d %d",&x, &y, &z);

    if(x-y==y-z)
    {
        printf("è in progressione aritmetica\n");
    }
    else
    {
        printf("non è in progressione aritmetica\n");
    }
}