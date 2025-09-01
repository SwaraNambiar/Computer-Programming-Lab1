//grams to kg
#include <stdio.h>
int main ()
{
    int gms, kgs;
    printf("Enter the number to be converted in kilograms");
    scanf("%d",&gms);
    kgs=gms/1000;
    printf("%d grams = %d kilograms",gms,kgs)
}