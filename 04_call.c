#include <stdio.h>

void fun(int *a, int *b) // a and b are formal arguments
{
    int temp = *a;
    *a= *b;
    *b=temp;
}

void arr(int ar[]) // can use *ptr instead also
{
    ar[0]=5;
}

int main(int argc, char const *argv[])
{
    int x=6, y=8;
    printf("valur of a id %d and b is %d\n",x,y);
    fun(&x,&y); // call by reference , x and y are actual arguments
    printf("valur of a id %d and b is %d\n",x,y); 

    int a[] = {1,2,3,4,4};
    printf("first element is %d\n",a[0]);
    arr(a);
    printf("first element is %d\n",a[0]); 

    return 0;
}
