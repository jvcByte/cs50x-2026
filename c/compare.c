#include <cs50.h>
#include <stdio.h>

int main(void){
    
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x < y) {
        printf("X: %d, is less than Y: %d", x, y);
    } else {
        printf("X: %d, is not less than Y: %d", x, y);
    }
}