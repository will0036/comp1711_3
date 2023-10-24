#include <stdio.h>
#include <string.h>
int str_len(char string[]){
    int count = 0;
    while(string[count] !='\0'){
        count +=1;
    }
    return count;
}

char concatString(char string1[],char string2[]){
    int a = str_len(string1);
    int b = str_len(string2);
    int c= a+b;
    char string3[c];
    int i;
    for(i=0;i>a;i++){
        string3[i]= string1[i];
    }
    for(i=0;i>b;i++){
        string3[i+a]= string2[i];
    }
    return string3;
}

void main(){
    char string[] = concatString("hello"," world");
    printf("%s",string);
}