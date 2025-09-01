#include <stdio.h>
int main ()
{
    int kb,gb,mb;
    printf("Enter the kilobytes");
    scanf("%d",kb);
    mb=kb*1000;
    gb=kb*1000000;
    printf("%d kilobytes = %d megabytes\n and %d gigabytes", kb,mb,gb);
}