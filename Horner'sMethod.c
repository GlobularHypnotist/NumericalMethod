#include <stdio.h>
int main(){
    float a[100], sum = 0, x;
    int n, i;
    printf("Enter degree of the polynomial: ");
    scanf("%d", &n);
    printf("\nEnter coefficients of the polynomial: \n");
    for(i = n; i >= 0; i--){
		printf("Enter coefficient of x^%d: ", i);
		scanf("%f", &a[i]);
	}
    printf("\nEnter the value of x: ");
    scanf("%f", &x);
    for(i = n; i > 0; i--){
		sum = (sum + a[i]) * x;
    }
    sum = sum + a[0];
    printf("\nValue of the polynomial: %.2f", sum);
    return 0;
}
