#include<stdio.h>
#include<math.h>
float f(float x) {
    return sqrt(1 + x * x);
}
int main() {
    float x0, xn, h, term, v;
    int k, i;
    printf("f(x) = sqrt(1 + x^2)\n");
    printf("Enter the lower limit: ");
    scanf("%f", &x0);
    printf("Enter the upper limit: ");
    scanf("%f", &xn);
    printf("Enter the number of segments: ");
    scanf("%d", &k);
    h = (xn - x0) / k;
    term = f(x0) + f(xn);
    for (i = 1; i <= k - 1; i++) {
        term = term + 2 * f(x0 + i * h);
    }
    v = (h / 2) * term;
    printf("The value of integration is: %f\n", v);
    return 0;
}

