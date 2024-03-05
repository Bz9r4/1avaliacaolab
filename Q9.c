#include <stdio.h>

// calcula o produto entre x1 e x2 de forma recursiva.
int calcularProduto(int x1, int x2) {
    // Se x2 for igual a zero, a função retorna zero (caso base).
    if (x2 == 0) {
        return 0;
        // Caso contrário, ela retorna a soma de x1 com o resultado da chamada recursiva calcularProduto(x1, x2 - 1).
    } else {
        return x1 + calcularProduto(x1, x2 - 1);
    }
}

int main() {
    int x1, x2;

    printf("Insira dois números inteiros (x1 x2): ");
    scanf("%d %d", &x1, &x2);

    // Chama a função calcularProduto com esses valores e armazena o resultado na variável resultado.
    int resultado = calcularProduto(x1, x2);
    printf("O produto de %d e %d é: %d\n", x1, x2, resultado);

    return 0;
}