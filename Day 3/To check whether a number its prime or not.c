#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Prompt user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Numbers less than or equal to 1 are not prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Loop from 2 up to i * i <= num (equivalent to sqrt(num))
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Factor found, so it is not prime
                break;       // Exit the loop early
            }
        }
    }

    // Output the result based on the flag value
    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
