#include<stdio.h>
#include<math.h>
#define PI 3.1415
float f(float x){
	float sinOfX;
	sinOfX = sin(x);
	return sinOfX + 1;
}
int main(){
	float x, h, fx, fxh, derivative;
	printf("Derivative of f(x) = sin(x) + 1\n");
	printf("Enter the value of x (in degrees): ");
	scanf("%f", &x);
	printf("Enter the value of h: ");
	scanf("%f", &h);
	x = (PI / 180) * x;
	fx = f(x);
	fxh = f(x + h);
	derivative = (fxh - fx) / h;
	printf("The value of derivative: %f", derivative);
	return 0;
}
