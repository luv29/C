#include <stdio.h>

void check(int n)
{
    int num = n; 
    int reverse = 0;

    while(num!=0)
    {
        reverse =(reverse*10) + (num%10);
        num=num/10;
    }

    printf("thr reversed number is%d\n",reverse);

    if (reverse== n)
        printf("it is a pallindrome.");
    else
        printf("it is not a pallindrome.");
}

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number.\n");
    scanf("%d", &a);
    check(a);
    return 0;
}
