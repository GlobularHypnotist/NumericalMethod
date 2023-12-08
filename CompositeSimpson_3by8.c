#include<stdio.h>
float f(float x) {
    return 1 / (x + 4);
}
int main() {
    float x0, xn, h, term, v;
    int k, i;
    printf("f(x) = 1 / (x + 4)\n");
    printf("Enter the lower limit: ");
    scanf("%f", &x0);
    printf("Enter the upper limit: ");
    scanf("%f", &xn);
    printf("Enter the number of segments: ");
    scanf("%d", &k);
    h = (xn - x0) / k;
    term = f(x0) + f(xn);
    for (i = 1; i <= k - 1; i++) {
        if (i % 3 != 0) {
            term = term + 3 * f(x0 + i * h);
        } else {
            term = term + 2 * f(x0 + i * h);
        }
    }
    v = (3.0 / 8) * h * term;
    printf("The value of integration is: %f\n", v);
    return 0;
}

