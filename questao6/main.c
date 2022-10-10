#include <stdio.h>
#include <stdlib.h>

int soma1aN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + soma1aN(n - 1);
}

int main()
{
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("%d\n", soma1aN(n));
    return 0;
}