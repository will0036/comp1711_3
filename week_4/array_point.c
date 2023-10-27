#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    double xcord;
    double ycord;
}point;

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
    for(int i=0;i<10;i++){
        printf("<%lf,%lf>\n",pointer[i].xcord,pointer[i].ycord);
    }
}
