/**
NOTE: For a 32-bit unsigned integer, you need the maximum value: 
2^32 - 1 = 4294967295 

Adding 1 gives: 
4294967295 + 1 ≡ 0  (mod 2^32)
*/ 


#include <stdio.h>
#include <cs50.h>

int main(void){
   unsigned int x = 4294967295u;

    // while(true){

    //     if (x < 0){
    //         printf("Overflow!!: %i\n", x);
    //     }

    //     if (x == 0){
    //         break;
    //     } else {
    //         int value = get_int("Value: ");
    //         x *= value;
    //         printf("x is now: %i\n", x);
    //     }
    // }

    // printf("Broke out of loop, x is: %i\n", x);

    printf("x is %u\n", x);
    x+=1;
    printf("x + 1 is %u\n", x);

}