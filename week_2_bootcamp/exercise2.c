#include <stdio.h>

void main(){
    int array[] = {1,2,3,4,5};
    int i;
    int temp;
    for (i=0;i<3;i++){
        temp = array[i];
        array[i] = array[4-i];
        array[4-i] = temp;
    }
    for (i=0;i<5;i++){
        printf("%d",array[i]);
    }
}