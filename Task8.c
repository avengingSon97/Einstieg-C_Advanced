#include <stdio.h>

int main (void)
{
    int number = 0;
    int sum = 0;

    do
    {
        printf("Geben Sie eine positive Zahl ein. Null beendet"
            "das Program: ");
        scanf("%d", &number);

        if (number > 10)
        {
            sum += number;
        }
    
    } while (number != 0);


    printf("Summe der Zahlen groesser 0: %d\n", sum);
}