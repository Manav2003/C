#include<stdio.h>
#include<string.h>
int main()
{
    char str[3000];
    char temp , *left, *right;
    printf("\nEnter the string: ");
    scanf("%s",str);
    left=str;
    right=str+strlen(str)-1;
    while(right>left)
    {
        temp=*right;
        *right=*left;
        *left=temp;
        left+=2;
        right-=2;
    }
    printf("\nThe reversed string: %s\n",str);
}