#include<stdio.h>
void main()
{
    // %d = signed int
    int a=20;
    int b=-20;
    printf("value is %d\n",a);
    printf("value is %d\n",b);

    // %u  unsigend int
    int A=10;
    int B=-10;
    printf("Unsigned integer is %u\n",A);
    //printf("Unsigned integer is %u\n",B); // give garbage value becouse %u only allow to unsigned interger

    // %o == Octal Number
    int c=0122021;
    printf("Octal Number is %o\n",c);

    // %x or %X == Hexadecimal Value 
    int C=0xAbc;
    printf("Hexadecimal number is %x\n",C);
    printf("Hexadecimal number is %X\n",C);

    //%f == Float number
    float d=32.32f;
    printf("Float value is %f\n",d);

    //%e or %E  == scientific float value
    float y=3;
    printf("e %e\n",y);
    printf("e %E\n",y);

    // %g == float same as input
    float D=12.32;
    printf("float same as input %g\n",D);

    // %p == address of value in hexadecimal 
    int e=12;
    printf("Address value of E in hexadecimal form %p\n",e);

    // %c Char 
    char R='a';
    printf("char value is = %c\n",R);

    //%s print string 
    char s[20]="Nitish";
    printf("String Value is = %s",s);
    



}