#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    double xcord;
    double ycord;
}point;

double manhattan(double x1,double y1, double x2, double y2){
    return (abs(x1-x2)+abs(y1-y2));
}

void main(){
    point pointer[11];
    time_t t;
    srand((unsigned) time(&t));
    for(int i=0;i<10;i++){
        point pointf; 
        pointf.xcord = rand() %10;
        pointf.ycord = rand() %10;
        pointer[i] = pointf;
    }
    double total;
    for(int i=0;i<9;i++){
        total +=manhattan(pointer[i].xcord,pointer[i].ycord,pointer[i+1].xcord,pointer[i+1].ycord);
    }
    printf("%lf",total);
}