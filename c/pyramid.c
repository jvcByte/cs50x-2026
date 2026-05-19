#include <stdio.h> 
#include <cs50.h>

int main(void){

    int pyramid_height = get_int("Lenght of pyramid: ");

    for (int i = 0; i < pyramid_height; i++) {

        for (int k = 0; k < i; k++){
            printf("#");
        }

        printf("\n");
        // printf(" ");
    }

}