#include <stdio.h>

/**
 * Program to check if a number is prime
 * with input validation and optimization
 */
int is_prime(int n) {
    if (n <= 1) return 0;  // 0 and 1 are not prime numbers
    if (n <= 3) return 1;  // 2 and 3 are prime numbers
    
    // Check if n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    // Check for prime using 6k +/- 1 optimization
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    
    return 1;
}

int main() {
    int n;
    
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a valid positive integer\n");
        return 1;
    }

    if (is_prime(n)) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}
