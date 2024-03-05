#include <stdio.h>
#include <math.h>

void calcularRaizesReais(int a, int b, int c) {
    // Calcula o discriminante da equação quadrática usando a fórmula b^2 - 4ac.
    int discriminante = b * b - 4 * a * c;

    //Verifica se o discriminante é negativo. Se for, a função quadrática não tem raízes reais. Caso contrário, calcula as raízes reais usando a fórmula quadrática.
    if (discriminante < 0) {
        printf("A função quadrática não tem raízes reais.\n");
    } else {
        double raiz1 = (-b + sqrt(discriminante)) / (2.0 * a); // Calcula a primeira raiz real usando a fórmula quadrática.
        double raiz2 = (-b - sqrt(discriminante)) / (2.0 * a); // Calcula a segunda raiz real

        printf("As raízes reais da função quadrática são: %.2lf e %.2lf\n", raiz1, raiz2);
    }
}

int main() {
    int a, b, c;

    printf("Insira os coeficientes da função quadrática (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    calcularRaizesReais(a, b, c); // Chama a função calcularRaizesReais com os coeficientes fornecidos.

    return 0;
}