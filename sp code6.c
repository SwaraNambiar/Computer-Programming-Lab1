//hours to minutes
#include <stdio.h>
int main ()
{
    float mins,hours;
    printf("Enter the number of hours");
    scanf("%f",&hours);
    mins=hours*60;
    printf("%d hours = %d minutes",hours,mins);
}