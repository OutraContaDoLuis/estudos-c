#include <stdio.h>

//Constantes
#define PI 3.14

const double EULER = 2.71828;

int main() {
    //TIPO---TAMANHO---FAIXA DE VALORES---USO---
    //====================================================
    //char---1 byte---128 a 127---Caracteres e Bytes

    int idade = 20;
    float altura = 1.75f;
    double salario = 4500;
    char inicial = 'D';

    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Salario: R$ %.2lf\n", salario);
    printf("Inicial: %c\n", inicial);

    printf("Tamanho de int: %zu bytes\n", sizeof(long));
    printf("Tamanho de double: %zu bytes\n", sizeof(float));

    printf("\n");
    printf("USANDO CONSTANTES\n");
    printf("\n");
    printf("Constante PI: %.2lf \n", PI);
    printf("Constante Euler: %.5lf \n", EULER);

    return 0;
}