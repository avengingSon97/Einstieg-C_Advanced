#include <stdio.h>

int fibonacci (int i);

int main (void)
{
    int fib = 0;


    printf("Gib eine Zahl ein: ");
    scanf("%d", &fib);

    for (int i = 0; i < fib; i++)
    {
        if (i > 0)
        {
        printf("%d\n", fibonacci(i));
        }
    }
}

int fibonacci (int i)
{
    if ( i == 1 || i == 0)
    {
        return i;
    }else {
        return (fibonacci(i-1)) + (fibonacci (i- 2));
    }
}