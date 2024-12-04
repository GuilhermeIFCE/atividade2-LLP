#include <stdio.h>

int main() {
    float celsius, fehrenheit, kelvin;

    printf("Digite o a temperatura: ");
    scanf("%f", &celsius);

    if(celsius < 20) {
        fehrenheit = celsius * 1.8 + 32;
        printf("A temperatura em Fehrenheit: %.2f\n", fehrenheit);
    }else{
        kelvin = celsius + 273.15;
        printf("A temperatura em Kelvin: %.2f\n", kelvin);
    }

    return 0;
}
