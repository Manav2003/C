#include<stdio.h>
#include<math.h>
int fact (int p)
{
    int f=1;
    for(int i=1;i<=p;i++)
    f*=i;
    return f;
}
float calc(float x, int n, int p, int sign)
{
    float f=0;
    for(;p<=n;p++)
    {
        f+=sign*(pow(x,2*p-1)/fact(2*p-1));
        sign*=-1;
    }
    return f;
}
int main( )
{
    float x, ans;
    int n;
    printf("\nEnter the values of x and n: ");
    scanf ("%f%d" , &x, &n) ;
    ans = calc(x, n, 1, 1) ;
    printf ("\nOUTPUT: \nf(%f,%d) = %f", x, n, ans) ;
}