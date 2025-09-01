//calculate simple interest
#include <stdio.h>
int main ()
{
    int p,r,t,i;
    printf("Enter the principal amount\n rate\n time");
    scanf("%d%d%d",&p,&r,&t);
    i=(p*r*t)/100;
    printf("Interest is %d",i);
}