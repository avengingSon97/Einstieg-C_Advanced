#include <stdio.h>

int main (void)
{
    int multiplikand;
    int multiplikator;
    int berechnungen;
    int sum = 0;

    printf("Gib einen Multiplikand ein: ");
    scanf("%d", &multiplikand);

    printf("Gib einen Multiplikator ein: ");
    scanf("%d", &multiplikator);

    printf("Gib Anzahl der Berechnungen ein: ");
    scanf("%d", &berechnungen);

    sum = multiplikand;

    for (int i = 0; i < berechnungen; i++)
    {
        sum = sum * multiplikator;
        printf("%d * %d = %d\n", sum, multiplikator, sum); 
    }

    for (int i = 0; i < berechnungen; i++) {
        sum = sum / multiplikator;
        printf("%d / %d = %d\n", sum, multiplikator, sum);
    }


}

