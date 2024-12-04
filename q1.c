#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Informe seu Peso: ");
    scanf("%f", &peso);

    printf("Informe sua Altura: ");
    scanf("%f", &altura);

    imc = (peso / (altura*altura));

    if(imc >= 18.5 && imc <= 24.9){
        printf("Peso Normal.\n");
    }else{
        printf("Fora do Peso.\n");
    }

    return 0;
}
