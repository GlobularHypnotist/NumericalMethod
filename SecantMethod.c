#include<stdio.h>
#include<math.h>
float a3, a2, a1, a0;
float f(float x){
	return(a3 * x * x * x + a2 * x * x + a1 * x + a0);
}

int main(){
	float x0, x1, x2, E, fx0, fx1, Era;
	printf("Enter the coefficients a3, a2, a1 and a0: \n");
	scanf("%f%f%f%f", &a3, &a2, &a1, &a0);
	printf("Enter initial guess and Error precision: \n");
	scanf("%f%f%f", &x0, &x1, &E);

	while(1){
		fx0 = f(x0);
		fx1 = f(x1);

		x2 = x1 - ((fx1 * (x1 - x0)) / (fx1 - fx0));
		Era = (x2 - x1) / x2;

		if(fabs(Era) < E){
			printf("Root = %f", x2);
			break;
		}
		x0 = x1;
		x1 = x2;
	}
	return 0;
}
