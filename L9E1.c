#include <stdio.h>
int main()
{
    int n,s,c=0;
    printf("Enter Array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter number for which frequency is needed: ");
    scanf("%d",&s);
    for(int i =0;i<n;i++)
    if(a[i]==s)
    c++;
    printf("Frequency of the number in this array: %d",c);
    return 0;
}