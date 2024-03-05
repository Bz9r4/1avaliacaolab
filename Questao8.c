#include <stdio.h>

// função que irá inverter os numeros
int inverteDigitos(int numero) {
    int resultado = 0; // variavel que armazena o numero invertido

//  Iniciamos um loop while que continuará enquanto o valor de numero for diferente de zero.
    while (numero != 0) {
        // multiplica o resultado por 10 e adiciona o último dígito de numero (obtido usando o operador %). ajuda a inverter os dígitos.
        resultado = resultado * 10 + numero % 10;
        numero /= 10; // Divide numero por 10 para remover o último dígito.
    }

    return resultado; // função retorna o valor final de resultado.
}

int main() {
    int valor;

    printf("Insira um número inteiro: ");
    scanf("%d", &valor);
    
    // Chama a função inverteDigitos com o valor inserido pelo usuário e armazena o resultado na variável resultado.
    int resultado = inverteDigitos(valor);
    printf("O número invertido é: %d\n", resultado);

    return 0;
}