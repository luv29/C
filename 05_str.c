#include <stdio.h>
#include <string.h> // string methods library

int main(int argc, char const *argv[])
{
    char c[]= {'a','b', 'c','\0'};
    puts(c);

    char sentence[55];
    gets(sentence);

    printf("%s",  sentence);

    char name[] ="luv"; // \0 id added automaatically
    
    return 0;
}
