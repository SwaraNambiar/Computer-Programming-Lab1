//dollars to pounds and pounds to rupees
#include <stdio.h>
int main ()
{
    float rs,dollar,pound;
    printf("Enter amount in dollars");
    scanf("%f"&dollar);
    rs=dollar*48;
    pound=rs*70;
    printf("%f rupees\n %f pounds",rs,pound);
}