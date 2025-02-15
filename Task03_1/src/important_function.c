#include <stdio.h>
#include <math.h>

double important_function(double x) {
    return sin(x) + sqrt(fabs(x));
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

