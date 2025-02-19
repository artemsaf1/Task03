#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;
    char newline;
    if (scanf("%d %d%c", &a, &b, &newline) != 3 || newline != '\n') {
        printf("n/a");
        return 1;
    }

    printf("%d", max(a, b));

    return 0;
}
