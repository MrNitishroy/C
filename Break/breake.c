#include<stdio.h>
void main()
{
    int a=0;
    for(a=0;a<7;a++)
    {
        printf("%d\n",a);
        if(a==5)
        {
            break;
        }
    }
}