#include <stdio.h>

int main(void)
{
    int folge = 0;
    int sum = 1;

    printf("Enter a number: ");
    scanf("%d", &folge);

    for (int k = 1; k <= folge; k++)
    {
        printf("%d\n", sum);
        sum = sum * 2;
    }
}