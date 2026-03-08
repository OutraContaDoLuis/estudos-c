#include <stdio.h>

//Constantes
#define PI 3.14

const double EULER = 2.71828;

int main() {
    //======================================================================
    //TIPO-------------TAMANHO---FAIXA DE VALORES----USO--------------------
    //======================================================================
    //char-------------1 byte----128 a 127-----------Caracteres e Bytes-----
    //unsigned char----1 byte----0 a 255-------------Bytes sem sinal--------
    //short------------2 bytes-- -32.768 a 32.767----Inteiros pequenos------
    //int--------------4 bytes---~-2.1 bi a ~2.1 bi--Inteiros (uso geral)---
    //unsigned int-----4 bytes---0 a ~4.2 bi---------Inteiros sem sinal-----
    //long-------------8 bytes*--Enorme--------------Inteiros grandes-------
    //float------------4 bytes---~6 casas decimais---Ponto flutuante simples
    //double-----------8 bytes---~15 casas decimais--Ponto flutuante duplo--
    //======================================================================

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