#include<stdio.h>
int main()
{
    int x,min,max;
    scanf("\n%d%d",&max,&x);
    min=x<max?x:max;
    max=x>max?x:max;
    printf("\nMax is %d\nMin is %d",max,min);
    return 0;
}