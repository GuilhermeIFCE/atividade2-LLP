#include <stdio.h>

int main() {
    float salario, prestacao;

    printf("Informe seu salário: ");
    scanf("%f", &salario);

    printf("Informe o valor da prestação do empréstimo: ");
    scanf("%f", &prestacao);

    float porcentagemPrestacao = prestacao * 0.2;

    if(porcentagemPrestacao > salario) {
        printf("Empréstimo não concedido.\n");
    }else{
        printf("Emprestimo concedido.\n");
    }

    return 0;
}
