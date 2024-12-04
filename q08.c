#include <stdio.h>

int main() {
    float nota1, nota2, media, recuperacao, notaFinal;

    printf("Informe sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe sua segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if(media >= 7){
        printf("Aprovado!\n");
        return 0;
    }else{
        printf("Informe a nota da recuperação: ");
        scanf("%f", &recuperacao);
    }

    notaFinal = (nota1 + nota2 + recuperacao) / 2;

    if(media < 7 && notaFinal >= 5){
        printf("Aprovado com recuperação!\n");
    }else{
        printf("Reprovado.\n");
    }

    return 0;
}
