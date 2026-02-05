#include <stdio.h>

int main(void)
{
    int n, i;
    int fact = 1;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        fact *= i;

    printf("%d\n", fact);
    return 0;
}
