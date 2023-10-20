#include <stdio.h>

void main(){
    int array[] = {5,6,2,9,2};
    int temp = 0;
    int i;
    for(i=0;i<5;i++){
        if(array[i] <temp){
            temp = array[i];
        }
    }
    printf("the max array value is = %d",temp);

}