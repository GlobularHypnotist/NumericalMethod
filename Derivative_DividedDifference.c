#include<stdio.h>
int main(){
    int i, j, k, n;
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
    //second to nth divided differences
    for(i = 0; i < n; i++){
        for(j = n - 1; j >= i + 1; j--){
            dd[j] = (dd[j] - dd[j - 1]) / (dataPointX[j] - dataPointX[j - 1 - i]);
        }
    }
    float vod = dd[1];
    for(i = 2; i < n; i++){
        float term = 0;
        for(j = 0; j < i; j++){
            float factor = 1;
            for(k = 0; k < i; k++){
                if(j != k){
                    factor = factor * (x - dataPointX[k]);
                }
            }
            term = term + factor;
        }
        vod = vod + (dd[i] * term);
    }
    printf("First derivative: %f", vod);
    return 0;
}

