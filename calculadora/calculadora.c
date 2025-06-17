#include <stdio.h>
#include<stdio.lib>

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
Inicio:
    printf("\nInsira o primeiro número: ");
    scanf("%f", &num1);
    printf("\nSelecione uma operação:\n");
    printf("A ou a - Adição\n");
    printf("S ou s - Subtração\n");
    printf("M ou m - Multiplicação\n");
    printf("D ou d - Divisão\n");
    printf("Você selecionou a operação: ");
    scanf(" %c", &operacao);
    printf("\Digite o segundo número: ");
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
        printf("\nOperação inválida!, Coloque um valor diferente de 0 para esta operação.\n");
    }
    printf("\nDeseja fazer mais cálculos? (Digite 'q' para sair ou qualquer outra tecla para continuar): ");
    scanf(" %c", &continuar);

    if (continuar == 'q') {
        printf("\nTerminando a execução...\n");
    } else {
        goto inicio;
    }
}
