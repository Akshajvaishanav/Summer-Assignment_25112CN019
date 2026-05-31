#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, digits = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // 1. Count the total number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    // 2. Calculate the sum of digits raised to the power of total digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    // 3. Check if the sum matches the original number
    // Rounding is used to prevent precision errors from the pow() function
    if ((int)(result + 0.5) == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
