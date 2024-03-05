#include <stdio.h>
#include <math.h>

// verifica se um número n é divisível por um divisor específico.
int isDivisible(int n, int divisor) {
    // Se o divisor for menor ou igual a 1, a função retorna 0 (indicando que não é divisível).
    if (divisor <= 1) {
        return 0;
    } else if (n % divisor == 0) {
        return 1;
        // Caso contrário, verifica se n é divisível por divisor. Se sim, retorna 1; caso contrário, chama recursivamente a função com um divisor menor (divisor - 1).
    } else {
        return isDivisible(n, divisor - 1);
    }
}

// verifica se um número n é primo.
int isPrime(int n) {
    // Se n for menor que 2, a função retorna 0 (pois números menores que 2 não são primos).
    if (n < 2) {
        return 0;
        // Caso contrário, ela verifica se n é divisível por todos os números inteiros de 2 até a raiz quadrada de n. Se não for divisível por nenhum deles, retorna 1 (indicando que é primo).
    } else {
        return !isDivisible(n, (int)sqrt(n));
    }
}

int main() {
    int num;

    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    // Chama a função isPrime(num) para verificar se o número é primo.
    if (isPrime(num)) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}