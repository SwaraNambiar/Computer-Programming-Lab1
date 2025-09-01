//22.
#include <stdio.h>
void main ()
{
float netsales,gsales,discount;
printf("Enter gross sales");
scanf("%f",&gsales);
discount = (10.0/100)*(gsales);
netsales = gsales - discount;
printf("%f=%f-%f",netsales,gsales,discount);
}
