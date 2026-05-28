#include <stdio.h>

int main() {
    int num, i;

    // Ask the user to enter the number for the table
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Multiplication Table for %d:\n", num);

    // Loop from 1 to 10 to calculate and print results
    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
