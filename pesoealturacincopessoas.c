#include <stdio.h>

int main() {
    float altura, peso;
    float somaAlturas = 0.0;
    float mediaAlturas;
    int abaixo40 = 0;
    int i;

   
    for (i = 1; i <= 5; i++) {
        printf("Pessoa %d\n", i);

        printf("Digite a altura (em metros): ");
        scanf("%f", &altura);

        printf("Digite o peso (em kg): ");
        scanf("%f", &peso);

        somaAlturas = somaAlturas + altura;

       
        if (peso < 40.0) {
            abaixo40 = abaixo40 + 1;
        }
    }

 
    mediaAlturas = somaAlturas / 5.0;

   
    float porcentagem = (abaixo40 * 100.0) / 5.0;

  
    printf("\nMedia das alturas: %.2f m\n", mediaAlturas);
    printf("Porcentagem com peso inferior a 40 kg: %.2f%%\n", porcentagem);

    return 0;
}