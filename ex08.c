#include <stdio.h>

int main ()
{
   float x;
   
   printf("inserisci una temperaturain gradi Celsius");
   scanf("%f", &x);
   //printf("Celsius:%f\n", x);

    if(x<-273.15)
    {
        printf("errore\n");
    }
    else
    {
        float Fahrenheit = (9/5)*x+32;
        float kelvin = x+273.15;
        printf("Fahrenheit:%f\n", Fahrenheit);
        printf("Kelvin:%f\n", kelvin);
    }


}