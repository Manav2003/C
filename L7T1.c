#include<stdio.h>
int main()
{
    int n;
    printf("Enter a integer between 1 and 50: ");
    scanf("%d",&n);
    int c=n/2;
    for(int i=0;n>c;i++)
    {
        if(i%10==0)
        printf("\n");
        printf("%-3d",n--);
    }
}