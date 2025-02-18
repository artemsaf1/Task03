#include <stdio.h>

long long fi(int n) {
    if (n < 2) {
        return n;
    }
    return fi(n - 1) + fi(n - 2);
}
int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("n/a\n");
        return 1;
    }
    printf("%lld\n", fi(n));
return 0;
}
