#include <stdio.h>

float CircleArea(float radius){
    float pi = 3.1415;
    float answer = pi * radius * radius;
    return answer;
}

void main(){
    float x = CircleArea(2.0);
    printf("%f",x);
}