//area and perimeter of rectangle
#include <stdio.h>
int main ()
{
    int l,b,a,p;
    printf("Enter the length\t and perimeter");
    scanf("%d%d",l,b);
    p=2*(l+b);
    a=l*b;
    printf("The perimeter is %d\n and area is %d",p,a);
}