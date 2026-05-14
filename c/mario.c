#include <stdio.h>

int main(void){

    int loop = 5;
    int nested_loop = 10;

    for (int i = 0; i < loop; i++){

        for (int j = 0; j < nested_loop; j++){
            printf("#");
        }

        printf("\n");
    }
}