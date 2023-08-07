#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number %d is positive.\n", number);
    } else {
        printf("The number %d is either zero or negative.\n", number);
    }

    return 0;
}

