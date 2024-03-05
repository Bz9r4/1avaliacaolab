#include <stdio.h>

// implementação recursiva da função de Ackermann,
// que é uma função matemática que cresce rapidamente e é usada para testar a eficiência de algoritmos e sistemas de computação.
int A(int m, int n) {
    // Se m for igual a 0, retorna n + 1.
    if (m == 0) {
        return n + 1;
        // Se m for maior que 0 e n for igual a 0, chama recursivamente A(m - 1, 1).
    } else if (m > 0 && n == 0) {
        return A(m - 1, 1);
        // Se m for maior que 0 e n for maior que 0, chama recursivamente A(m - 1, A(m, n - 1)).
    } else if (m > 0 && n > 0) {
        return A(m - 1, A(m, n - 1));
        // Caso contrário, retorna -1.
    } else {
        return -1;
    }
}

void apresentarResultados(int a, int b) {
    // itera sobre os valores de x de 0 até a - 1 e, para cada valor de x, itera sobre os valores de y de 0 até b - 1.
    for (int x = 0; x < a; x++) {
        // Para cada par de valores (x, y), imprime o resultado da função A(x, y).
        for (int y = 0; y < b; y++) {
            printf("A(%d, %d) = %d\n", x, y, A(x, y));
        }
    }
}

int main() {
    int a, b;

    printf("Insira dois inteiros (a b): ");
    scanf("%d %d", &a, &b);
//  chama a função apresentarResultados(a, b) para exibir os resultados da função A para todos os pares (x, y) dentro dos limites especificados.
    apresentarResultados(a, b);

    return 0;
}