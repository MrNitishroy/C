#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        {
            printf("Number is one \n");
            printf("Hello, code sikhe members");
            break;
        }

        case 2:
        {
            printf("Number is two\n");
            printf("Welcome to Code sikhe Channel");
            break;
        }
        default:
        {
            printf("This is default part");
            break;
        }

    }
}