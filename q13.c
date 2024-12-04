#include <math.h>
#include <stdio.h>

int main() {
    int numero, raizQuadrada, aoQuadrado;

    printf("Digite um número (positivo ou negativo): ");
    scanf("%i", &numero);

    if(numero > 0) {
        raizQuadrada = sqrt(numero);
        printf("O número inserido é positivo, e sua raiz quadrada é: %i\n", raizQuadrada);
    }else{
        aoQuadrado = pow(numero, 2.0);
        printf("O número inserido é negativo, e ele elevado ao quadrado é: %i\n", aoQuadrado);
    }

    return 0;
}
