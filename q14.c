#include <stdio.h>

int main() {
    float altura, pesoIdeal;
    char sexo;

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    printf("Informe seu sexo:\nf-feminino\nm-masculino\n");
    scanf("%s", &sexo);

    if(sexo == 'f'){
        pesoIdeal = 62.1 * altura - 44.7;
        printf("O seu peso ideal é: %.1f\n", pesoIdeal);
    }else{
        pesoIdeal = 72.7 * altura - 58;
        printf("O seu peso ideal é: %.1f\n", pesoIdeal);
    }

    return 0;
}
