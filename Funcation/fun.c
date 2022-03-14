#include<stdio.h>
int mul(int a, int b)
{
    return a*b;
}
int sum(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
void main()
{
    int a=sum(4,6);
    int b=sub(4,6);
    int c=mul(4,6);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
}