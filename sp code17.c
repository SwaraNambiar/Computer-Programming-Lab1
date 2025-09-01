//area and perimeter of square
#include <stdio.h>
int main ()
{
    int a,p,l;
    printf("Enter the length of the square");
    scanf("%d",&l);
    a=l^2;
    p=4*l;
    printf("Area=%d\t Perimeter=%d",a,p);
}