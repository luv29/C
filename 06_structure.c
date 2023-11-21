#include <stdio.h>
#include <string.h>

struct Student
{
    int marks;
    char name[12];
}a, b;// another way

   // struct Student s1; global  

int main(int argc, char const *argv[])
{
    struct Student s1; // local
    s1.marks = 100;
    strcpy(s1.name, "luv");

    return 0;
}
