#include <stdio.h>

int main ()
{
    int x;
    int sbarco = 1969;
    printf("inserisci il tuo anno di nascita\n");
    scanf("%d", &x);

    if(x==sbarco)
    {
        printf("sei nato lo stesso anno dello scbarco sulla luna\n");
    }
    else if(x>sbarco)
    {
        int z=x-sbarco;
        printf("sei nato dopo %d anni dallo sbarco sulla luna\n ",z);
    }
    else 
    {
        int y = sbarco-x;
        printf("sei nato %d anni prima dello sbarco sulla luna\n", y);
    }
    
}