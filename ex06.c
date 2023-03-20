#include <stdio.h>

int main ()
{
    int a;

    printf("quanti anni hai");
    scanf("%d", &a);
    printf("a:%d\n", a);

    if(a>18)
    {
      printf("sei minorenne %d\n", a);
    }
     if(a<18)
    {
      printf("sei minorenne %d\n", a);
    }
    
}