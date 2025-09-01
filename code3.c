//23.
#include <stdio.h>
void main ()
{
int marks1,marks2,marks3,total,average;
printf("Enter marks in three subjects");
scanf("%d%d%d",&marks1,&marks2,&marks3);
total = marks1 + marks2 + marks3;
average=total/3.0;
printf("%d + %d + %d = %d\n",marks1,marks2,marks3,total);
printf("Average=%d/3 = %d\n",total,average);
}
