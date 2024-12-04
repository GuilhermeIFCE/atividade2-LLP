#include <stdio.h>

int main() {
    int num1, num2;

    printf("Insira o valor do primeiro número: ");
    scanf("%i", &num1);

    printf("Insira o valor do segundo número: ");
    scanf("%i", &num2);

    if(num1 > num2){
        printf("O primerio número (%i) é maior, e o segundo número (%i) é o menor.\n", num1, num2);
    } else {
        printf("O segundo número (%i) é maior, e o primeiro número (%i) é menor.\n", num2, num1);
    }

    return 0;
}
