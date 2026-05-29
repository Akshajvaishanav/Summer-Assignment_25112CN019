#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Loop until the number becomes 0
    while (n != 0) {
        remainder = n % 10;          // Get the last digit
        reverse = reverse * 10 + remainder; // Add it to the reversed number
        n /= 10;                     // Remove the last digit from n
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}
