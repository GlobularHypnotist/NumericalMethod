#include<stdio.h>
int main(){
	int i, j, n;
	float x, v = 0, L[20];
	printf("Enter the number of points: ");
	scanf("%d", &n);
	float dataPointX[n], dataPointY[n];
	printf("Enter the value of x: ");
	scanf("%f", &x);
	printf("Enter the data points x and f(x): \n");
	for(i = 0; i < n; i++){
		scanf("%f%f", &dataPointX[i], &dataPointY[i]);
	}
	for(i = 0; i < n; i++){
		float l = 1.0;
		for(j = 0; j < n; j++){
			if(j != i){
				l = l * ((x - dataPointX[j]) / (dataPointX[i] - dataPointX[j]));
			}
		}
		L[i] = l;
	}
	for(i = 0; i < n; i++){
		v = v + dataPointY[i] * L[i];
	}
	printf("The interpolated value is %f at %f.", v, x);
	return 0;
}
