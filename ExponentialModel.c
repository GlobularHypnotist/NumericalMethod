#include<stdio.h>
#include<math.h>
int main(){
	int i, j, n;
	float a, b, r, sumX, sumLogY, sumXY, sumXSquare;
	printf("Enter the number of points: ");
	scanf("%d", &n);
	float dataPointX[n], dataPointY[n];
	printf("Enter the data points x and f(x): \n");
	for(i = 0; i < n; i++){
		scanf("%f%f", &dataPointX[i], &dataPointY[i]);
		sumX += dataPointX[i];
		sumLogY += log(dataPointY[i]);
		sumXY += (dataPointX[i] * log(dataPointY[i]));
		sumXSquare += (dataPointX[i] * dataPointX[i]);
	}
	b = ((n * sumXY) - (sumX * sumLogY)) / ((n * sumXSquare) - (sumX * sumX));
	r = (sumLogY / n) - (b * sumX / n);
	a = exp(r);
	printf("The equation is: \n\ty = %fe^(%fx)", a, b);
	return 0;
}
