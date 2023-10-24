#include <stdio.h>
#include <stdlib.h>

int main(){
    char filename [] = "squares.dat";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("");
        return 1;
        }
        int buffer_size = 100;
        char line_buffer[buffer_size];
        float avg;
        while (fgets(line_buffer, buffer_size, file) != NULL) {
            avg += atoi(line_buffer);
        }
        printf("%f",avg/5);
        fclose(file);
        return 0;
}