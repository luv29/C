#include <stdio.h>
#include <math.h>

int sum(int a, int b)
{
    return a+b;
}

void call(int (*ptr) (int, int)) // call backk function , thid helps to use different function in a function
{
    printf("the square root is %f\n", sqrt(ptr(5,2)));
}

int main(int argc, char const *argv[])
{
    int (*ptr) (int, int); // declaring a function pointer
    ptr = &sum; // defining the pointer
    int a= (*ptr) (5,6); // dereferencing a function pointer
    printf("the sum is %d\n", a);
    call(ptr);

    /*
    int (*p)[10] = pointer to 10 element array
    int (*p[10]) (); // p is a 10 element array of function pointers
    int *(*p) (char (*a)[]) = p = function poineter , argument = pointer to char array, return = int*

    */
    return 0;
}
