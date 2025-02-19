#include <stdio.h>
#include <math.h>

double important_function(double x) {
    return 7e-3 * pow(x,4) + ((22.8 * pow(x,(1 / 3)) - 1e3) * x + 3) / (pow(x,2) / 2) - x * pow((10 + x), (2 / x)) - 1.01;
}

int main() {
    double x;
    char newline;
    if(scanf("%lf%c", &x,&newline) != 2 || newline != '\n') {
        printf("n/a");
        return 1;
    }

    printf("%.1f", important_function(x));

    return 0;
}

//7e-3 * x^4 + ((22.8 * x^⅓ - 1e3) * x + 3) / (x * x / 2) - x * (10 + x)^(2/x) - 1.01