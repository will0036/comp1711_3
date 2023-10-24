#include <stdio.h>

int isprime(int integer){
    int prime = 1;
    int i;
    for(i=1 ;i <= integer/2; i++){
        if(integer%i == 0){
            prime = 0;
        }
    }
    return prime;
}

void main(){
    printf("%d",isprime(89));
}