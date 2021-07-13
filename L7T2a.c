#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number between 0 and 9: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        if(j<i)
        printf("# ");
        else
        printf("%-2d",j+1);
        printf("\n");
    }
}