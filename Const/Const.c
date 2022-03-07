#include<stdio.h>
void main()
{
    const int pi = 3.141; // you can't change value or pi after declare one time
    // pi=2; // error = Assifnment of read-only variable;
    printf("%d",pi);
}