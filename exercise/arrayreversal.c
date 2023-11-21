#include <stdio.h>

void reverse(int a[], int length)
{
    int limit = length/2;
    for(int i=0;i<limit;i++)
    {
        int temp= a[i];
        a[i]= a[length-1-i];
        a[length-1-i] = temp;
    }

}

void print(int a[], int length)
{
    for(int i=0;i<length;i++)
    {
        printf("%d  ", a[i]);
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5,6,7};
    int length = sizeof(a)/4;
    print(a,length);
    reverse(a,length);
    printf("\n");
    print(a,length);
    return 0;
}
