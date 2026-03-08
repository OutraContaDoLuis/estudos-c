#include <stdio.h>

int main() {
    // Relacionais — retornam 1 (verdadeiro) ou 0 (falso)
    //a == b   // igual a
    //a != b   // diferente de
    //a > b    // maior que
    //a < b    // menor que
    //a >= b   // maior ou igual
    //a <= b   // menor ou igual

    // Lógicos
    //a && b   // E lógico (AND)
    //a || b   // OU lógico (OR)
    //!a       // NÃO lógico (NOT)

    int x = 10;
    x += 5;   // x = x + 5  → 15
    x -= 3;   // x = x - 3  → 12
    x *= 2;   // x = x * 2  → 24
    x /= 4;   // x = x / 4  → 6
    x %= 4;   // x = x % 4  → 2

    x++;       // pós-incremento: usa x, depois incrementa
    ++x;       // pré-incremento: incrementa, depois usa
    x--;       // pós-decremento
    --x;       // pré-decremento

    int a = 10, b = 20;
    int maior = (a > b) ? a : b;  // Se a > b, maior = a; senão, maior = b
    printf("Maior: %d\n", maior); // 20

    return 0;
}