#include <stdio.h>

// Function to calculate factorial of a given number
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr
long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    printf("Enter value for n: ");
    scanf("%d", &n);
    printf("Enter value for r: ");
    scanf("%d", &r);

    if (r > n) {
        printf("Invalid input! r should be less than or equal to n.\n");
        return 1;
    }

    printf("nCr(%d, %d) = %lld\n", n, r, nCr(n, r));

    return 0;
}
