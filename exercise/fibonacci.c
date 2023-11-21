#include <stdio.h>

int fibonacci(int length)
{
    if(length==1)
    {
        return 0;
    }
    else if(length==2)
    {
        return 1;
    }
    else
    {
        int n = fibonacci(length-1) + fibonacci(length-2);
        return n;
    }
}

int forFibonacci(int length)
{
    int current=0;
    int next=1;
    for(int i=1; i<=length;i++)
    {
        next += current;
        current = next - current;
    }
    return current;
    /* my method
    int fib=0;
    int prev=0;
    for (int i = 0; i <length; i++)
    {
        if(i==1)
        {
            fib=1;
        }
        else 
        {
            int temp = fib;
            fib += prev;
            prev=temp;
        }
            
    }
    return fib; 
    */
    
}

int main(int argc, char const *argv[])
{
    int n;
    printf("ENTER THE LIMIT\n");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        printf("%d\t", forFibonacci(i));
    }
    
    return 0;
}
