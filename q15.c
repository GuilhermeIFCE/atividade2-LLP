#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Informe sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe sua terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3*2) / 4;

    if(media >= 60) {
        printf("Sua média é %.1f. Parabéns, você foi aprovado!\n", media);
    }else{
        printf("Sua média é %.1f. Boa sorte na próxima, você não atingiu a média.\n", media);
    }

    return 0;
}
