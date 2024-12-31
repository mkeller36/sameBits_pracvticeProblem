#include <stdint.h>
#include <stdio.h>

#define numBits 8

void samebits(uint8_t val1, uint8_t val2);

void main(void){
    uint8_t a, b;
    a = 9;  /* 0000 1001 */
    b = 42; /* 0010 1010 */
    samebits(a,b);

    a = 93;
    b = 72;
    samebits(a,b);

}

void samebits(uint8_t val1, uint8_t val2){
    uint8_t ans = val1 & val2;
    uint8_t ans2;
    if(ans){
        printf("These two numbers have at least one matching bit!\n");
        for(uint8_t i = 0; i < numBits; i++){
            ans2 = ans & 0x1;
            if(ans2){
                printf("The bit in the %d location is shared. \n", i);
            }
            ans>>=1;
        }
    }
    else{
        printf("These do not share any bits. \n");
    }
}