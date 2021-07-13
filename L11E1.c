#include<stdio.h>
void swap(int *x, int *y) {

   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Before swap:\na = %d\nb = %d\n",a,b);
    swap(&a,&b);
    printf("After swap:\na = %d\nb = %d\n",a,b);
}