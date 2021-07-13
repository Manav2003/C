#include<stdio.h>
int main()
{
    int ra,rb,ca,cb;
    printf("Enter number of rows and column for matrix A(r c): ");
    scanf("%d %d",&ra,&ca);
    printf("Enter number of rows and column for matrix B(r c): ");
    scanf("%d %d",&rb,&cb);
    if(ca==rb)
    {
        int a[ra][cb],b[rb][cb],c[ra][cb];
        printf("Enter elements of matrix A:\n");
        for(int i=0;i<ra;i++)
        for(int j=0;j<ca;j++)
        scanf("%d",&a[i][j]);
        printf("Enter elements of matrix B:\n");
        for(int i=0;i<rb;i++)
        for(int j=0;j<cb;j++)
        scanf("%d",&b[i][j]);
        printf("Product matrix C:\n\n");
        for(int i=0;i<ra;i++)
        {
            for(int j=0;j<cb;j++)
            {
                c[i][j]=0;
                for(int k=0;k<rb;k++)
                c[i][j]+=a[i][k]*b[k][j];
                printf("%-4d",c[i][j]);
            }
        printf("\n\n");
        }
    }
    else
    printf("Matrices not multiplicable");
    return 0;
}