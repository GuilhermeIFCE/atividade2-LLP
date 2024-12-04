#include <stdio.h>

int main() {
    int numero, triplo;

    printf("Digite um número: ");
    scanf("%i", &numero);

    if(numero % 2 == 0){
        printf("Número Par\n");
    }else{
        printf("Numero Ímpar\n");
        triplo = numero * 3;
        printf("O triplo é: %i\n", triplo);
    }

    return 0;
}
