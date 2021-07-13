#include<stdio.h>
int main()
{
    int c[]={0,0,0,0,0,0},n,v,w=0,k=0;
    printf("Enter the number of voters: ");
    scanf("%d",&v);
    for(int i=0;i<v;i++)
    {
        printf("Vote-%d: ",i+1);
        scanf("%d",&n);
        if(n>0&&n<6)
        c[n]++;
        else
        c[0]++;
    }
    for(int i=0;i<6;i++)
    {
        k=w>=c[i]?k:i;
        w=w>=c[i]?w:c[i];
    }
    n=0;
    if(k==0)
    printf("\nTRUMP WON");
    else
    {
        for(int i=1;i<6;i++)
        if(w==c[i])
            n++;
        if(n==1)
            printf("\nCandidate %d won with %d votes",k,w);
        else
           {
               printf("TIED between\n");
                for(int i=1;i<6;i++)
                if(w==c[i])
                printf("Candidate %d\n",i);
           }
    }
}