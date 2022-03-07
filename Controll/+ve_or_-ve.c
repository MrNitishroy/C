#include<stdio.h>
void main()
{
    int number;
    printf("Enter a Number : ");
    scanf("%d",&number);
    if(number>0)
    {
        printf("Number is +ve");
    }
    else{
        printf("Number is -ve");
    }
}