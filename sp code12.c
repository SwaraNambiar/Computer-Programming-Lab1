//kgs to grams
#include <stdio.h>
int main ()
{
    int gms, kgs;
    printf("Enter the number to be converted in grams");
    scanf("%d",&kgs);
    gms=kgs*1000;
    printf("%d kilograms = %d grams",kgs,gms)
}