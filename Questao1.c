#include <stdio.h>

int main() {
    // Loop externo para iterar 5 vezes
    for (int i = 0; i < 5; ++i) {
        int numero;

        // Solicita ao usuário que digite um número entre 1 e 30
        printf("Digite um número entre 1 e 30: ");
        scanf("%d", &numero);

        // Verifica se o número está dentro do intervalo válido
        if (numero >= 1 && numero <= 30) {
            // Loop interno para imprimir asteriscos na quantidade especificada pelo número
            for (int j = 0; j < numero; ++j) {
                printf("*");
            }
            printf("\n"); // Insere uma nova linha após imprimir os asteriscos
        } else {
            // Exibe mensagem de erro e decrementa o contador i para repetir a entrada
            printf("Por favor, insira um número entre 1 e 30.\n");
            --i;
        }
    }
    return 0; // Retorna 0 para indicar sucesso
}
