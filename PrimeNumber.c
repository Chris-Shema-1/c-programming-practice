#include <stdio.h>
#include <stdbool.h>

void logic(int n) {
    bool prime[n + 1];
    for (int i = 2; i <= n; i++) prime[i] = true;
    
    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p) prime[i] = false;
        }
    }
    
    for (int i = 2; i <= n; i++) if (prime[i]) printf("%d ", i);
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n >= 2) logic(n);
    else printf("No prime numbers available.\n");
    return 0;
}
