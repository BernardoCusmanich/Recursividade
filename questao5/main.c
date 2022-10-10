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
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Soma: %d\n", soma(vet, 10));

    return 0;
}