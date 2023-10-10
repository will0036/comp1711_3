#include <stdio.h>
#include <math.h>

void main(){
    int maxint;
    float maxfloat;
    double maxdouble;
    char maxchar;
    printf("\nmaxinteger is %f",pow(2,(sizeof(maxint)*8)));
    printf("\nmaxfloat is %f",pow(2,(sizeof(maxfloat)*8)));
    printf("\nmaxdouble is %f",pow(2,(sizeof(maxdouble)*8)));
    printf("\nmaxchar is %f",pow(2,(sizeof(maxchar)*8)));
}