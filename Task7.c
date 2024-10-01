#include <stdio.h>

int main (void)
{
    int number = 0;
    int reverse = 0;
    int remainder = 0;

    printf("Enter whole number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        remainder = number % 10; // even when number is smaller than 10 the result won't be 0 but the actual number e.g 6 % 10 = 6. 
        reverse = reverse * 10; // shift left to make place for the new digit e.g on second iteration it is 60. the next line then adds the remainder to the 60.
        reverse = reverse + remainder; // first iteration: 0 + 5; second iteration = 5 + 6 = 11 when the number is 56.
        number = number / 10; // C rounds down even if it is at or above 0.5.

    }
    printf("%d\n", reverse);

}