#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main (void)
{
    int max = 0;
    bool isPrime;
    int Prime = 0;
    


    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &max);

    for (Prime = 2; Prime <= max; Prime++)
    {
        isPrime = true;

        for (int j = 2; j < Prime; j++)
        {
            if(Prime % j == 0)
            {
                isPrime = false;
                break;
            }

        }
        if (isPrime)
        {
            printf("%d\n", Prime);
        }
    }

}