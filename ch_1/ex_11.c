#include <stdio.h>

unsigned int int_to_int(unsigned int k);

int main(void){
    printf("Enter a positive Integer:\n");
    unsigned int input;
    scanf("%d",&input);
    
    // Hexadecimal
    printf("HEXADECIMAL: 0x%x\n", input);
    
    // Octal
    

    // Quarternary
    

    // Binary
    printf("\nBINARY: %d\n", int_to_int(input));

    return 0;
}

unsigned int int_to_int(unsigned int k) {
    return (k == 0 || k == 1 ? k : ((k % 2) + 10 * int_to_int(k / 2)));
}
