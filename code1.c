//21.
#include <stdio.h>
void main ()
{
float netsalary,gsalary,allowance,deduction;
printf("Enter the gross salary");
scanf("%f",&gsalary);
allowance = (10/100)*(gsalary);
deduction = (3/100)*(gsalary);
netsalary = gsalary + allowance - deduction;
printf("%f+%f+%f=%f",gsalary,allowance,deduction,netsalary)
}