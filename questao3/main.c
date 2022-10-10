#include <stdio.h>
#include <stdlib.h>

int fat(int k, int n)
{
    if (n == 1)
    {
        k = 0;
    }
    else
    {
        k = k * fat(k, n - 1);
    }

    return k;
}

int main()
{
    int n, k;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    printf("%d\n", fat(k, n));
    return 0;
}