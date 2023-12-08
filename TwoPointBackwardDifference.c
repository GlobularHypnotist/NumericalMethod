#include<stdio.h>
float f(float x, float a, float b, float c){
	float fun = a * x * x + b * x + c;
	return fun;
}
int main(){
	float x, h, a, b, c, fx, fxh, derivative;
	printf("Derivative of f(x) = ax^2 + bx + c\n");
	printf("Enter the value of a, b and c: \n");
	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	printf("c: ");
	scanf("%f", &c);
	printf("Enter the value of x: ");
	scanf("%f", &x);
	printf("Enter the value of h: ");
	scanf("%f", &h);
	fx = f(x, a, b, c);
	fxh = f(x - h, a, b, c);
	derivative = (fx - fxh) / h;
	printf("The value of derivative: %f", derivative);
	return 0;
}
