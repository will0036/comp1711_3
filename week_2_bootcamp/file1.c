#include <stdio.h>

void main(){
    int a =2, b = 3;
    printf("a = %d, b =%d\n",a,b);
    int temp =a;
    a= b; 
    b= temp;
    printf("a=%d, b= %d\n",a,b);
}
