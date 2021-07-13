#include<stdio.h>
#include<math.h>
int main() 
{
    float sum=0;
    int x,n;
    again: 
    {
        printf("Enter the values for x and n:");
        scanf("%d %d",&x,&n);
    }
    if(n<=0 || x<=0)
    {
        printf("Value is not valid\n");
        goto again;
    }
    else
    {
        printf("Value is valid\n");
        while(n>=0)
        sum+=pow(x, n--);
        printf("Sum of series=%.0f\n", sum);
    }
}