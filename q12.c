#include <stdio.h>

int main() {
    int num1 = 413, num2 = 157, num3 = 512, num4 = 289;
    int max1, max2;
    int min1, min2;

    if(num1 > num2){
        max1 = num1;
        min1 = num2;
    }else{
        max1 = num2;
        min1 = num1;
    }

    if(num3 > num4){
        max2 = num3;
        min2 = num4;
    }else{
        max2 = num4;
        min2 = num3;
    }

    if(max1 > max2) {
        printf("O maior número é: %i\n", max1);
    }else{
        printf("O maior número é: %i\n", max2);
    }

    if(min1 < min2){
        printf("O menor número é: %i\n", min1);
    }else{
        printf("O menor número é: %i\n", min2);
    }

    return 0;
}
