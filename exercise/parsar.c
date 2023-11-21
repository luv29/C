#include <stdio.h>
#include <string.h>

void parse(char *string)
{
    int enter, index=0;
    for(int i=0;i<strlen(string); i++)
    {
        if(string[i]=='<')
        {
            enter =0;
            continue;
        }
        else if(string[i]=='>')
        {
            enter = 1;
            continue;
        }
         if(enter ==1)
         {
            string[index]= string[i];
            index++;
         }

         if(string[0]==' ')
         {
            for(int j=0;j<=strlen(string); j++)
            {
                string[j]=string[j+1];
            }
         }
    }
}

int main(int argc, char const *argv[])
{
    char c[] = "<luv>  this a a statement <luv>"; 
    parse(c);
    printf("parsed string is %s this is the result.", c);

    return 0;
}
