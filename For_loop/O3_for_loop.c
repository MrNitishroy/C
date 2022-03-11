#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    for(int a=1;a<=10;a++)
    {
        printf("%d x %d = %d\n",num,a,num*a);
    }
}