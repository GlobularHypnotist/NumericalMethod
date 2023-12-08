#include<stdio.h>
int factorial(int a){
	if(a == 0){
		return 1;
	}else{
		return(a * factorial(a - 1));
	}
}
int main(){
	int i, j, n;
	float x, h, s, v, p = 1;
	printf("Enter the number of points: ");
	scanf("%d", &n);
	float fd[n], dataPointX[n], dataPointY[n];
	printf("Enter the value of x: ");
	scanf("%f", &x);
	printf("Enter the data points x and f(x): \n");
	for(i = 0; i < n; i++){
		scanf("%f%f", &dataPointX[i], &dataPointY[i]);
	}
	h = dataPointX[1] - dataPointX[0];
	s = (x - dataPointX[0]) / h;
	//first divided differences
	for(i = 0; i < n; i++){
		fd[i] = dataPointY[i];
	}
	//second divided differences
	for(i = 0; i < n; i++){
		for(j = n - 1; j >= i + 1; j--){
			fd[j] = fd[j] - fd[j - 1];
		}
	}
	v = fd[0];
	//calculate interpolated value
	for(i = 1; i < n; i++){
		for(j = 1; j <= i; j++){
			p = p * (s - j + 1);
		}
		v = v + (fd[i] * p) / factorial(i);
		p = 1;
	}
	printf("Interpolated value: %f", v);
	return 0;
}
