#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf(" number is Even ");
    }
    else{
        printf("Number is odd");
    }
}