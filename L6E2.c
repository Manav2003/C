#include<stdio.h>
int main()
{
    char c;
    scanf("\n%c",&c);
    c=='E'?c++:c;
    c=='E'?printf("Value is E\n"):printf("Value is %c",c);
}