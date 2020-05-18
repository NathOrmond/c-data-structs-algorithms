#include <stdio.h>

int main(void){
    int input_s = 10;
    int inputs[input_s];

    printf("inputs");
    for(int index = 0; index < input_s; index++){
        scanf("%d", &inputs[index]);
        printf("\n");
    }

    printf("formatted: \n");

    for(int index = 0; index < input_s; index++){
        printf("%d", inputs[index]);
        if((index % 3) == 0){
            printf("\n");
        }else{
            printf(",");
        }
    }

    return 0;
}
