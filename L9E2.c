#include<stdio.h>
int main()
{
    int n;
    printf("Enter Array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int i=0,j=0;
    while(i<n-1)
    {
        while(j<n-i-1)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
            j++;
        }
        i++;
        j=0;
    }
    printf("Output:\nElements is ascending order:\n");
    for(int i=0;i<n;i++)
    printf("%-3d",a[i]);
    return 0;
}