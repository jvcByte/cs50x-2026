#include <stdio.h>
#include <cs50.h>

int main(void){
    int x = get_int("Value x: ");
    int y = get_int("Value y: ");

    printf("Sum of x and y: %i", x + y);

}