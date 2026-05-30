#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Store the larger number in max
    max = (num1 > num2) ? num1 : num2;

    // Loop until max is perfectly divisible by both numbers
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("The LCM of %d and %d is %d.\n", num1, num2, max);
            break; 
        }
        max++;
        // Alternatively, use: max += (num1 > num2) ? num1 : num2; for optimization
    }

    return 0;
}
