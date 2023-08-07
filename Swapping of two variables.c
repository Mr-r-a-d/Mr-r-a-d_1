#include <stdio.h>

int main() 
{
    int a = 10, b = 20;

    printf("Before: a = %d, b = %d", a, b);

    // Swapping using addition and subtraction
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After: a = %d, b = %d", a, b);
    return 0;
}


