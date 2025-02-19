#include <stdio.h>

int main() {
    int a, b;
    char newline;
    if (scanf("%d %d%c", &a, &b, &newline) != 3 || newline != '\n') {
        printf("n/a");
        return 1;
    }
    if (b != 0) {
        printf("%d %d %d %d", a + b, a - b, a * b, a / b);
    } else {
        printf("%d %d %d n/a", a + b, a - b, a * b);
    }
    return 0;
}
