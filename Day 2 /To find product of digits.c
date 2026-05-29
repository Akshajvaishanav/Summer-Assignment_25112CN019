#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1;

    // Ask user for input
    printf("Enter any number: ");
    scanf("%d", &num);

    // Handle the case if the number is 0
    if (num == 0) {
        product = 0;
    } else {
        // Make number positive if negative input is provided
        if (num < 0) num = -num;

        while (num > 0) {
            // Get the last digit
            remainder = num % 10;
            
            // Multiply the digit to product
            product = product * remainder;
            
            // Remove the last digit from the number
            num = num / 10;
        }
    }

    printf("Product of digits = %lld\n", product);

    return 0;
}
