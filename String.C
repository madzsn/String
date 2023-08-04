#include <stdio.h>
#include <string.h>

int main () {
    char nome[20];

    strcpy (nome, "Taylor");

    char sobrenome[20] = "Swift";

    strcat (nome, " ");
    strcat (nome, sobrenome);

    printf ("Nome completo:  %s\n", nome);

    return 0;
}