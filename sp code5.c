#include <stdio.h>
int main ()
{
    float a,b,sum,diff, prod, quo;
    printf("Enter two numbers\n");
    scanf("%f,%f",&a,&b);
    sum=a+b;
    printf("%f+%f=%f",a,b,sum);

    diff=a-b;
    printf("%f-%f=%f",a,b,diff);

    prod=a*b;
    printf("%f*%f=%f",a,b,prod);

    sum=a+b;
    printf("%f/%f=%f",a,b,quo);
}