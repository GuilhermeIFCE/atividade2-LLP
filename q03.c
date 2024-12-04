#include <stdio.h>

int main() {
    float valorDaCompra;
    int aVista;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorDaCompra);

    printf("O pagamento vai ser a vista?(1/0) ");
    scanf("%i", &aVista);

    if(valorDaCompra > 500.0 && aVista == 1) {
        printf("Tem direito a desconto.\n");
    } else {
        printf("Sem desconto.\n");
    }

    return 0;
}
