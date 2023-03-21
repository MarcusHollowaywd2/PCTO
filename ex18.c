#include <stdio.h>

int main()
{
    int x=-1;

    while(x<100)
    {
      x++;
       if(x>10 && x<100)
        {
            printf("%d\n", x);
        }
        if (x>-1 && x<10)
        {
            printf("0%d\n",x);
        }

    }
}