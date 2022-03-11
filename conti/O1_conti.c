#include<stdio.h>
void main()
{
   for(int i=0;i<=20;i++)
   {
       if(i==5)
       {
           continue;
       }
       if(i==15)
       {
           continue;
       }
       printf("%d\n",i);
   }
}