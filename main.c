#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
int contador = 0, acumulador = 0, num;
float media;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero\n");
    scanf("%d", &num);
    if (num != 0) {
        do {
            if ((num > 0) && num % 2 == 0){
                acumulador = acumulador + num;
                contador++;
            }
            printf("Digite um n�mero\n");
            scanf("%d", &num);
        }
        while (num != 0);
    }

    if (contador > 0) {
        media = acumulador/contador;
        printf("A m�dia � %.2f", media);
    }
    else {
        printf("Nenhum n�mero par positivo foi fornecido!");
    }

    return 0;
}
