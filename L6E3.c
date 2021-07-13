#include<stdio.h>
int main()
{
    int countA=0,countC=0,t=0,n;
    printf("Emter number of test cases : ");
    scanf("%d",&n);
    char ch;
    while(t++<n)
    {scanf(" %c",&ch);
    if(ch<97)
    ch=ch+32;
    switch(ch)
    {
        case 97:
        countA=countA+1;
        break;
        case 99: 
        countC++;
        break;
        default: printf("Error....Entered value other than a or c\n");
    }
    }
    printf("\nCount of A :%d\nCount of C: %d",countA,countC);
}