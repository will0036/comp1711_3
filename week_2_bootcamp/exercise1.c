#include <stdio.h>

void main(){
    int array[]= {1,2,3,4,5};
    int i;
    int val =0;
    for (i=0;i <5;i++){
        val += array[i];
    }
    printf("%d",val);
}