#include<stdio.h>
int main(){
	int i, j, n;
	float a, b, sumX, sumY, sumXY, sumXSquare;
	printf("Enter the number of points: ");
	scanf("%d", &n);
	float dataPointX[n], dataPointY[n];
	printf("Enter the data points x and f(x): \n");
	for(i = 0; i < n; i++){
		scanf("%f%f", &dataPointX[i], &dataPointY[i]);
		sumX += dataPointX[i];
		sumY += dataPointY[i];
		sumXY += (dataPointX[i] * dataPointY[i]);
		sumXSquare += (dataPointX[i] * dataPointX[i]);
	}
	b = ((n * sumXY) - (sumX * sumY)) / ((n * sumXSquare) - (sumX * sumX));
	a = (sumY / n) - (b * sumX / n);
	printf("The equation is: \n\ty = %.2f + %.2fx", a, b);
	return 0;
}
