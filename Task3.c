#include <stdio.h>
int main (void)
{
    int number = 0;
    int max = 0;
    int min = 100000000000000000;

    do
    {
        printf("Geben Sie eine positive Zahl ein. Null beendet"
            "das Program: ");
        scanf("%d", &number);

        if (number > max)
        {
            max = number;
        }
         if (number < min && number != 0)
        {
            min = number;
        }

    } while (number > 0);


    printf("max: %d min: %d\n", max, min);


}