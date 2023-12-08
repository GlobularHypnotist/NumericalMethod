#include<stdio.h>
int main(){
	int i, j, n;
	float x, v = 0, p = 1;
	printf("Enter the number of points: ");
	scanf("%d", &n);
	float dd[n], dataPointX[n], dataPointY[n];
	printf("Enter the value of x: ");
	scanf("%f", &x);
	printf("Enter the data points x and f(x): \n");
	for(i = 0; i < n; i++){
		scanf("%f%f", &dataPointX[i], &dataPointY[i]);
	}
	//first divided differences
	for(i = 0; i < n; i++){
		dd[i] = dataPointY[i];
	}
	//second divided differences
	for(i = 0; i < n; i++){
		for(j = n - 1; j >= i + 1; j--){
			dd[j] = (dd[j] - dd[j - 1]) / (dataPointX[j] - dataPointX[j - 1 - i]);
		}
	}
	//calculate interpolated value
	for(i = 0; i < n; i++){
		for(j = 0; j <= i - 1; j++){
			p = p * (x - dataPointX[j]);
		}
		v = v + dd[j] * p;
		p = 1;
	}
	printf("Interpolated value: %f", v);
	return 0;
}
