#include <stdio.h>
#include <string.h>
int main() 
{
    char line[50], ctr;
    int i,c,end=0, chars=0, words=0, lines=0,special=0;
    while( end == 0)
    {
        c = 0;
        while((ctr=getchar()) != '\n')
        line [c++] = ctr;
        line[c] = '\0';
        if(line[0] == '\0')
        break;
        else
        {
            words++;
            for(i=0; line[i] != '\0';i++)
            if(line[i] ==' ' || line[i]== '\t')
            words++;   
            else if(line[i]<65||line[i]>122||(line[i]>90&&line[i]<97))
            special++;
        }
        lines = lines +1;
        chars =chars+strlen(line);
    }
    printf("Lines = %d, Words= %d, Chars=%d, Special Characters=%d", lines, words, chars, special);
    return 0;
}