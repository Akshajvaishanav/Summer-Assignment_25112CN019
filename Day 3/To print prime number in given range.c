#include <stdio.h>
#include <math.h>

int main() {
    int lower, upper, i, j, isPrime;

    // Get the range boundaries from the user
    printf("Enter lower bound of the interval: ");
    scanf("%d", &lower);
    printf("Enter upper bound of the interval: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    // Iterate through each number in the given range
    for (i = lower; i <= upper; i++) {
        // Skip numbers less than 2 as they are not prime
        if (i < 2) {
            continue;
        }

        isPrime = 1; // Assume the number is prime initially

        // Check divisibility from 2 up to the square root of i
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0; // Number is divisible, so it is not prime
                break;       // Exit the inner loop early
            }
        }

        // If isPrime remains 1, the number is prime
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
