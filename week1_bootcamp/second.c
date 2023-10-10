#include <stdio.h>
#include <math.h>

void main(){
    const double pi = 3.14159265358979323846;
    float radius;
    printf("\nradius of circle is");
    scanf("%f",&radius);
    float area = radius * radius * pi;
    printf("area of circle is%f",area);
}