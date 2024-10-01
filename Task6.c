#include <stdio.h>
int main (void)
{
    int number = 0;
    float sum = 0;
    int counter = 0;

    do
    {
        printf("Geben Sie eine positive Zahl ein. Negative Zahl beendet"
            "das Program: ");
        scanf("%d", &number);

        if (number > 0)
        {
            sum += number;
            counter ++;
        }
    
    } while (number > 0);

    sum = sum / counter;
    printf("Durchschnitt der Zahlen: %.2f\n", sum);


}