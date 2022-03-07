#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter value of A: ");
    scanf("%d",&a);
    printf("Enter value of B: ");
    scanf("%d",&b);
    printf("Befor swaping value is A= %d and B= %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swaping value is A= %d and B= %d",a,b);
}