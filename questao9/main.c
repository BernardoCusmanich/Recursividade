#include <stdlib.h>
#include <stdio.h>

int soma(int v[], int tam)
{
    int f;
    if (tam == 0)
        f = 0;
    else
        f = v[tam - 1] + soma(v, tam - 1);

    return f;
}

int main()
{
    int v[10];
    int tam;
    int i;

    printf("Digite o valor do vetor: ");
    scanf("%d", &v[i]);
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    printf("Essa e a soma dos valores do vetor: %d", soma(v, tam));
}