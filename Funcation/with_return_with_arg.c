#include<stdio.h>

int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
} 

void main()
{
    int g = sum(4,6);
    printf("%d",g);
}