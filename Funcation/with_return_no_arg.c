#include<stdio.h>

float fun()
{
    
    printf("This is With return value and no argumnet function\n");
    return 34.32;
}

void main()
{
   float b = fun();
   printf("%.2f",b);
}