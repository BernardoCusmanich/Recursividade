#include <stdio.h>
#include <stdlib.h>

int pr(int v[], int tam)
{
    int f;
    if (tam == 0)
        f = 0;
    else
        f = v[tam - 1] + pr(v, tam - 1);
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

    printf("Esses sao os valores do vetor: ", pr(v, tam));

    return 0;
}