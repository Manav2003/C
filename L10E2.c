#include<stdio.h>
void reverse(char* s,int n)
{
    char t;
    int i;
    for (i=0; i<n/2;i++)
    {
        t=s[i] ;
        s[i]=s [n-i-1] ;
        s[n- i-1]=t;
    }
    for (i=0; i<n; i++)
    printf("%c", s[i]) ;
    printf(" ");
}
int main ()
{
    int length,c;
    char ch, str [50000] ;
    printf ("\nEnter your string: ") ;
    scanf("%c",&ch) ;
    length=0,c=1;
    while (ch!='\n' )
    {
        str [length]=ch;
        length++;
        scanf ("%c" , &ch) ;
        if(ch==' ')
        c++;
    }
    str[length]=' ';
    printf ("\nOUTPUT\nReversed Words: ");
    int k=0,j=0;
    while(c>0)
    {
        char str2[50000];
        for(int i=j;i<=length;i++)
        {
            if(str[j++]!=' ')
            str2[k++]=str[j-1];
            else 
            break;
        }
        reverse (str2,k);
        k=0;
        c--;
    }
}