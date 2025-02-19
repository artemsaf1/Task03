#include <stdio.h>

int incide(double x, double y) {
    return (x * x + y * y) < 25;
}

int main() {
    double x, y;
    char newline;
    if (scanf("%lf %lf%c", &x, &y, &newline) != 3 || newline != '\n') {
        printf("n/a");
        return 1;
    }

    if (incide(x, y)) {
        printf("GOTCHA");
    } else {
        printf("MISS");
    }
    return 0;
}
