#include <stdio.h>
int main() 
{
    long long int c; int u; double a;
    printf("Enter Customer type: ");
    scanf("%lld",&c);
    printf("Enter the number of units consumed: ");
    scanf("%d",&u);
    if(u<0||u>600)
    printf("\n\n\n\n\n...............ERROR...............");//No condition specified for this number of units.
    else if(u<201)
    a=0.5*u;
    else if(u<401)
    a=0.65*(u-200)+100;
    else if(u<601)
    a=230+0.80*(u-400);
    printf("\n\n\n\n\nCustomer numbrt : %lld\nUnits consumed : %d\nTotal amount : Rs.%.2lf",c,u,a);
}