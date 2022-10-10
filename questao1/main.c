#include <stdio.h>
#include <stdlib.h>

int fat(int n)
{
    int f;
    if (n == 1)
    {
        f = 0;
    }
    else
    {
        if (n == 2)
        {
            f = 1;
        }
        else
        {
            f = fat(n - 1) + fat(n - 2);
        }
    }

    return f;
}

int main()
{
    int n;
    printf("Digite um numero maior que zero: ");
    scanf("%d", &n);

    printf("O termo %d eh %d\n", n, fat(n));
}