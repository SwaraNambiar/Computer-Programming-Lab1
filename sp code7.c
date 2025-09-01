//convert minutes to hours
#include <stdio.h> 
int main ()
{
    int mins, hours;
    printf("Enter the number of minutes");
    scanf("%f",&mins);
    hours=mins/60.0;
    printf("%f minutes = %f hours",mins, hours);
}