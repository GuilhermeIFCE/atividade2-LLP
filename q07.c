#include <stdio.h>

int main() {
    int idade;
    float valorDoIngresso, desconto, valorFinal;

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    printf("Informe o valor do ingresso: ");
    scanf("%f", &valorDoIngresso);

    if(idade > 60){
        desconto = valorDoIngresso * 0.3;
        valorFinal = valorDoIngresso - desconto;
        printf("O valor final é: %.2f\n", valorFinal);
    }else{
        desconto = valorDoIngresso * 0.1;
        valorFinal = valorDoIngresso - desconto;
        printf("O valor final é: %.2f\n", valorFinal);
    }

    return 0;
}
