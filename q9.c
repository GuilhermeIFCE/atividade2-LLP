#include <stdio.h>

int main() {
    int num1, num2, adicao;

    printf("Informe o primeiro número: ");
    scanf("%i", &num1);

    printf("Informe o segundo número: ");
    scanf("%i", &num2);

    adicao = num1 + num2;

    if(adicao > 20){
        adicao += 8;
        printf("O valor da adição somado a 8 é: %i\n", adicao);
    }else{
        adicao -= 5;
        printf("O valor da adição subtraindo 5 fica: %i\n", adicao);
    }

    return 0;
}
