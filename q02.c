#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%i", &numero);

    if (numero > 10 && numero % 5 == 0) {
        printf("Maior que 10 e divisível por 5.\n");
    }else{
        printf("Não atende as condições.\n");
    }

    return 0;
}
