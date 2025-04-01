#include <stdio.h>

#define MAX 1000

long long memo[MAX]; // Array to store computed Fibonacci values

// Function to compute Fibonacci using memoization
long long fibonacci(int n) {
    if (n <= 1)
        return n;
    if (memo[n] != -1)
        return memo[n];
    
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Initialize memoization array with -1
    for (int i = 0; i < MAX; i++)
        memo[i] = -1;
    
    printf("Fibonacci(%d) = %lld\n", n, fibonacci(n));
    return 0;
}
