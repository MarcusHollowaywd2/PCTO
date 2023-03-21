#include <stdio.h>

int main()
{
    int x = 100;
    
     while(x>0)
    {
        x--;

        if(x%3==0)
        {
            printf("fizz\n");
        }
        else if(x%5==0)
        {
            printf("buzz\n");
        }
        else if(x%5==0 && x%3==0)
        {
            printf("fizzbuzz\n");
        }
        else
        {
            printf("%d\n",x);
        }
    }

}
