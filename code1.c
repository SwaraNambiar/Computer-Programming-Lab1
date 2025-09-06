//21.
#include <stdio.h>
int main ()
{
    float netsalary,gsalary,allowance,deduction;
    printf("Enter the gross salary");
    scanf("%f",&gsalary);
    allowance = (10.0/100)*(gsalary);
    deduction = (3/100.0)*(gsalary);
    netsalary = gsalary + allowance - deduction;
    printf(" %.2f + %.2f - %.2f = %.2f ", gsalary , allowance , deduction , netsalary);
}