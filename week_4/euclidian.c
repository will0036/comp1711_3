#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct
{
    double xcord;
    double ycord;
}point;

double euclidian(double x1,double y1, double x2, double y2){
    double x = abs(x1-x2);
    double y = abs(y1-y2);
    double xsqr = x*x;
    double ysqr = y*y;
    return (xsqr+ysqr)/(xsqr+ysqr);
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
    double smallest = 100;
    int point1,point2;
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            if(i != j){
                if(euclidian(pointer[i].xcord,pointer[i].ycord,pointer[j].xcord,pointer[j].ycord) < smallest){
                    smallest = euclidian(pointer[i].xcord,pointer[i].ycord,pointer[j].xcord,pointer[j].ycord);
                    point1 = i;
                    point2 = j;
                }
            }
        }
    }
    printf("<%lf,%lf> to <%lf,%lf> is shortest euclidian distance\n",pointer[point1].xcord,pointer[point1].ycord,pointer[point2].xcord,pointer[point2].ycord);
}