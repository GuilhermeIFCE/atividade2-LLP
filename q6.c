#include <stdio.h>

int main() {
    float velocidade, multa;

    printf("Informe a velocidade do veículo: ");
    scanf("%f", &velocidade);

    if(velocidade < 80){
        printf("Dentro do limite de velocidade.\n");
    }else{
        velocidade -= 80;
        multa = velocidade * 5;
        printf("O valor da multa é: %.2f\n", multa);
    }

    return 0;
}
