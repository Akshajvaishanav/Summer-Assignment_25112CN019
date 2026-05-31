#include <stdio.h>

int main() {
    int terms;
    unsigned long long first = 0, second = 1, next;

    // Prompt user for the number of terms
    printf("Enter the number of terms: ");
    if (scanf("%d", &terms) != 1 || terms <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (int i = 1; i <= terms; i++) {
        // Print the current term
        printf("%llu", first);
        
        // Formatting: add commas between numbers
        if (i < terms) {
            printf(", ");
        }

        // Calculate the next term and update variables
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
