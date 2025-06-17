#include <stdio.h>
#include <stdlib.h>

// Funções 
float soma(float a, float b);
float subtracao(float a, float b);
float multiplicacao(float a, float b);
float divisao(float a, float b);

int main() {
    float num1, num2, resultado;
    char operacao;
    char continuar;
    printf("Iniciando à calculadora...\n");
    printf("Seja bem-vindo(a) à calculadora!\n");
inicio:
    printf("\nInsira o primeiro número: ");
    scanf("%f", &num1);
    printf("\nSelecione uma operação:\n");
    printf("'a' - Adição\n");
    printf("'s' - Subtração\n");
    printf("'m' - Multiplicação\n");
    printf("'d' - Divisão\n(Lembrando que não se deve fazer divisões pelo número 0)\n");
    printf("Você selecionou a operação: ");
    scanf(" %c", &operacao);
    printf("\nDigite o segundo número: ");
    scanf("%f", &num2);
    if (operacao == 'a') {
        resultado = soma(num1, num2);
        printf("\nResultado: %f\n", resultado);
    } else if (operacao == 's') {
        resultado = subtracao(num1, num2);
        printf("\nResultado: %f\n", resultado);
    } else if (operacao == 'm') {
        resultado = multiplicacao(num1, num2);
        printf("\nResultado: %f\n", resultado);
    } else if (operacao == 'd') {
        resultado = divisao(num1, num2);
        printf("\nResultado: %f\n", resultado);
    } else {
        printf("\nOperação inválida!\n");
    }
    printf("\nDeseja fazer mais cálculos? (Digite 'q' para sair ou qualquer outra tecla para continuar): ");
    scanf(" %c", &continuar);

    if (continuar == 'q') {
        printf("\nTerminando a execução...\n");
    } else {
        goto inicio;
    }
}
