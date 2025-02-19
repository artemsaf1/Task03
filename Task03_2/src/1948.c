#include <stdio.h>

int largest_prime_divisor(int a) {
    int max_prime = 1;
    if (a < 0) {
        a = -a;
    }

    for (int i = 2; i<= a; i++) {
        int temp = a, is_prime = 1;

        while (temp >= i) temp -= i;
        if (temp != 0) continue;

        for (int j = 2; j * j <= i; j++) {
            int rem = i;
            while (rem >= j) rem -= j;
            if (rem == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) max_prime = i;
    }
    return max_prime;
}
int main() {
    int a;
    char newline;

    if (scanf("%d%c", &a, &newline) != 2 || newline != '\n') {
        printf("n/a");
        return 1;
    }

    int result = largest_prime_divisor(a);
    if (result == -1) {
        printf("n/a");
    } else {
        printf("%d", result);
    }
    return 0;
}
