#include<stdio.h>
#include<math.h>
float a3, a2, a1, a0;
float f(float x){
    return((a3 * x * x + a2 * x * x + a0) / -(a1));
}

int main(){
    float x0, x1, E, Era;
    printf("Enter the coefficients a3, a2, a1 and a0: \n");
    scanf("%f%f%f%f", &a3, &a2, &a1, &a0);
    printf("Enter initial guess and error precision: \n");
    scanf("%f%f", &x0, &E);

    while(1){
        x1 = f(x0);
        Era = (x1 - x0) / x1;

        if (fabs(Era) < E) {
            printf("Root = %f", x1);
            break;
        }
        x0 = x1;
    }
    return 0;
}
