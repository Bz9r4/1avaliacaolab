#include <stdio.h>

int main() {
    int i;

    //  Inicia um loop for que irá iterar de 0 a 127 (128 vezes)
    for (i = 0; i < 128; i++) {
        printf("%3d: %c   ", i, (char)i); //  Imprime o valor de i formatado como um número inteiro com 3 espaços,  e o caractere correspondente ao valor de i

        // Imprimir 10 caracteres por linha
        if ((i + 1) % 10 == 0) // Verifica se o próximo caractere a ser impresso é o décimo
            printf("\n");
    }

    return 0;
}