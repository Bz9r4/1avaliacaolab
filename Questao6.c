#include <stdio.h>

// calcula o Máximo Divisor Comum (MDC) entre dois números inteiros.
int mdc(int a, int b) {
    // Se b for igual a zero, a função retorna a, pois o MDC de qualquer número com zero é o próprio número.
    if (b == 0) {
        return a;
        // Caso contrário, a função chama recursivamente mdc(b, a % b), onde % é o operador de módulo (resto da divisão)
    } else {
        return mdc(b, a % b);
    }

    // A recursão continua até que b seja zero, e o MDC é encontrado.
}

int main() {
    int num1, num2;

    printf("Insira dois números inteiros: ");
    scanf("%d %d", &num1, &num2);
    
    // Chama a função mdc(num1, num2) para calcular o MDC dos números inseridos.
    printf("O Máximo Divisor Comum (MDC) de %d e %d é: %d\n", num1, num2, mdc(num1, num2));

    return 0;
}