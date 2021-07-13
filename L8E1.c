#include<stdio.h>

int main() 
{
    int n,t,f[]={0,0,0,0,0,0,0,0,0,0};
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element(0-9)- %d: ", i+1);
        scanf("%d",&arr[i]);
        f[(arr[i])]++;
    }
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    if(arr[i]>arr[j])
    {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    printf("Numbers in ascending order with their frequencies:\n\n");
    for(int i=0;i<n;i++)
    if(f[arr[i]]>0)
    {
        printf("%d occurs %d times\n",arr[i],f[arr[i]]);
        f[arr[i]]=0;
    }
    return 0;
}