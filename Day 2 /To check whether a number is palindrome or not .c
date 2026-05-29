#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Store original number to compare later
    original = n;

    // Reverse the integer
    while (n != 0) {
        remainder = n % 10;           // Isolate the last digit
        reversed = reversed * 10 + remainder; // Append to reversed
        n /= 10;                      // Remove the last digit
    }

    // Check if original and reversed are the same
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
