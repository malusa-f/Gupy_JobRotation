#include <stdio.h>
#include <locale.h>

/* código para atividade 2 gupy */
int main()
{
    setlocale(LC_ALL,  "Portuguese_Brazil.1252");

    int n, i, termo1 = 0, termo2 = 1, proximo_termo;
    int encontrado = 0;

    printf("Informe um número: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        if (i == n) {
            encontrado = 1;
            break;
        }
        proximo_termo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximo_termo;
    }

    if (encontrado) {
        printf("O número %d pertence à sequência de Fibonacci\n", n);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci\n", n);
    }

    return 0;
}
