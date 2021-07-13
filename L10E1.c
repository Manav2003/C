#include<stdio.h>
#include<string.h>
int main ( )
{
    int i,j,k,n;
    char str [50], t[50], arr [10] [50] ;
    printf("\nEnter the number of strings: ") ;
    scanf ("%d", &n) ;
    printf("\nEnter the strings : \n") ;

    for (i=0; i<n; i++)
    {
        scanf ("%s", str) ;
        strcpy (arr [i] , str) ;
    }
    for(i=1; i<n; i++)
    for (j=0; j<n-i;j++)
    {  
        if (strcmp (arr [ j ], arr[j+1])>0)
        {
            strcpy (t, arr [ j ] ) ;
            strcpy (arr [ j ], arr[j+1]) ;
            strcpy (arr [j+1] , t) ;
        }
        int a=strlen(arr[j]), b=strlen(arr[j+1]);
        if(a<b)
        {
            char s[a];
            for(int c=0;c<a;c++)
            {
                s[c]=arr[j+1][c];
            }
            //printf("%s\n", arr[j+1]) ;
            //printf("%s\n", arr[j]) ;
            if(strcmp(arr[j],s)==0)
            {
            strcpy (t, arr [ j ] ) ;
            strcpy (arr [ j ], arr[j+1]) ;
            strcpy (arr [j+1] , t) ;
            }
        }
    }
    printf ("\nOUTPUT: \nStrings in ascending order: \n");
    for(i=0; i<n; i++)
    printf("%s\n", arr[i]) ;
}