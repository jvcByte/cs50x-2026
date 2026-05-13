#include <stdio.h>
#include <cs50.h>

void meow(int n);

int main(void){
    int n = get_int("Meow times? ");
    meow(n);
    
}

void meow(int meow_times){

    if (meow_times < 0) {
        printf("No negative int allowed!");
    }

    for(int i = 0; i < meow_times; i++){
        printf("Meow!\n");
    }
}