#include <stdio.h>
int main ()
//celcius to farenheit
{
    float c, f;
    printf("Enter the temperature in celcius");
    scanf("%f",c);
    f=(9/5*c)+32;
    printf("%f farenheit",f);
}