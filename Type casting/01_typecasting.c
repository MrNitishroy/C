#include<stdio.h>
void main()
{
    // Type conversion
    // int = int + int
    // float = float + float 
    // float = int + float

    // type casting - Convert one data type in another data type
    //explicit
    //data type = (Data type) variable

    int a=7,c;
    float b = 54.34;
    float t=0.0;
    t=(float)a;
    c=(int)b;
    printf("%d\n",c);
    printf("%.2f",b);
}