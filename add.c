#include <stdio.h>

int main()
{
    int num1, num2, sum;

    // Ask the user to enter two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Add the two numbers
    sum = num1 + num2;

    // Display the sum
    printf("%d + %d = %d\n", num1, num2, sum);

    return 0;
}
