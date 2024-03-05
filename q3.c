#include <stdio.h>

// recebe um inteiro n como argumento.
void encontraTriplosPitagoricos(int n) {
    int cateto1, cateto2, hipotenusa;

    printf("Triplos pitagóricos para catetos e hipotenusa menores ou iguais a %d:\n", n);

    //três loops aninhados
    // percorre todas as possíveis hipotenusas (de 1 até n)
    for (hipotenusa = 1; hipotenusa <= n; hipotenusa++) {
        // percorre todas as possíveis medidas para o cateto 1 (de 1 até n)
        for (cateto1 = 1; cateto1 <= n; cateto1++) {
            // percorre todas as possíveis medidas para o cateto 2 (de 1 até n)
            for (cateto2 = 1; cateto2 <= n; cateto2++) {
                // verifica-se se a soma dos quadrados dos catetos é igual ao quadrado da hipotenusa (hipotenusa * hipotenusa)
                if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa) {
                    printf("(%d, %d, %d)\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }
}

// Pede ao usuário para inserir um valor para n. Lê o valor digitado pelo usuário usando scanf. Chama a função encontraTriplosPitagoricos com o valor lido.
int main() {
    int limite;

    printf("Insira o valor de n: ");
    scanf("%d", &limite);

    encontraTriplosPitagoricos(limite);

    return 0;
}