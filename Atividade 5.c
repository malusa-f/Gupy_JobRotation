#include <stdio.h>
#include <locale.h>

/* código para atividade 5 gupy */
int main()
{
    setlocale(LC_ALL,  "Portuguese_Brazil.1252");

    char str[100], inverted_str[100];
    int i, j;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    j = strlen(str) - 1;
    for (i = 0; i < strlen(str); i++) {
        inverted_str[i] = str[j];
        j--;
    }
    inverted_str[i] = '\0';

    printf("String invertida: %s", inverted_str);

    return 0;
}

