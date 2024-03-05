#include <stdio.h>

void decimalParaRomano(int numero) {
    // verifica se esta dentro do intervalo valido, se não tiver, exibe uma mensagem de erro
    if (numero <= 0 || numero > 100) {
        printf("Forneça um número entre 1 e 100.\n");
        return;
    }

    printf("%3d: ", numero);

    // subtrai valores do número decimal e imprime os caracteres romanos correspondentes
    while (numero >= 100) {
        printf("C");
        numero -= 100;
    }

    if (numero >= 90) {
        printf("XC");
        numero -= 90;
    }

    while (numero >= 50) {
        printf("L");
        numero -= 50;
    }

    if (numero >= 40) {
        printf("XL");
        numero -= 40;
    }

    while (numero >= 10) {
        printf("X");
        numero -= 10;
    }

    if (numero >= 9) {
        printf("IX");
        numero -= 9;
    }

    while (numero >= 5) {
        printf("V");
        numero -= 5;
    }

    if (numero >= 4) {
        printf("IV");
        numero -= 4;
    }

    while (numero >= 1) {
        printf("I");
        numero -= 1;
    }

    printf("\n");
}

int main() {
    printf("Tabela de equivalentes de algarismos romanos para números decimais de 1 a 100:\n");
    
    //  um loop for itera de 1 a 100, chamando a função decimalParaRomano para cada número.
    for (int i = 1; i <= 100; i++) {
        decimalParaRomano(i);
    }

    return 0;
}