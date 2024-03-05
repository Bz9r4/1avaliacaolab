#include <stdio.h>
#include <math.h>

//  verifica se uma equação quadrática (ax² + bx + c = 0) tem raízes reais.
int temRaizesReais(int a, int b, int c) {

    // Calcula o discriminante usando a fórmula discriminante = b * b - 4 * a * c.
    int discriminante = b * b - 4 * a * c;
    
    // Retorna 1 se o discriminante for maior ou igual a zero, ou zero caso contrario
    return discriminante >= 0;
}

int main() {
    int a, b, c;

    printf("Insira os coeficientes da função quadrática (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Chama a função temRaizesReais(a, b, c) para verificar se a equação tem raízes reais.
    if (temRaizesReais(a, b, c)) {
        // Se a função temRaizesReais retornar 1, o programa exibirá:
        printf("A função quadrática tem raízes reais.\n");
    } else {
        // Caso contrário, exibirá:
        printf("A função quadrática não tem raízes reais.\n");
    }

    return 0;
}