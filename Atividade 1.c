#include <stdio.h>

/* c�digo para atividade 1 gupy */
int main()
{
    int INDICE = 13;
    int SOMA = 0;
    int K = 0;

    while (K < INDICE)
    {
        K = K + 1;
        SOMA = SOMA + K;
    }

    printf("%d\n", SOMA);

    return 0;
}

/*o valor da vari�vel SOMA � 91*/

