#include <stdio.h>

float SphereArea(float radius){
    float pi = 3.1415;
    float answer = pi * radius * radius *4;
    return answer;
}

void main(){
    float x = SphereArea(2.0);
    printf("%f",x);
}