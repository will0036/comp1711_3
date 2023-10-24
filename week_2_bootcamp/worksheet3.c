#include <stdio.h>
#include <string.h>

int str_len(char string[]){
    int count = 0;
    while(string[count] !='\0'){
        count +=1;
    }
    return count;
}

void main(){
    char stringg[] = "hello";
    int len = str_len(stringg);
    printf("the length of the strng is%d",len);
}