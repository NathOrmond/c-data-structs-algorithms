#include <stdio.h>

int main(void){
    char str[10];
    printf("Enter a ten character string: \n");
    scanf("%s",str);
    int vowels = 0;
    for(int i = 0; i < 10; i++ ) {
        if( (str[i] == "a" )|| (str[i] == "e")|| (str[i] == "i")|| (str[i] == "o" ) || (str[i] ==  "u")){ 
            vowels ++;
        }
    }

    printf("vowels: %d\n", vowels);

    return 0;
}
