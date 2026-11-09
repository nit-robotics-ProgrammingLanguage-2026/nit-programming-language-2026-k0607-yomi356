#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;

    scanf("%d", &n);

    if (n < 0)
    {
        printf("NG\n");
        return 0;
    }

    for (int i = 0; i <= 50; i++)
    {
        for (int j = 0; j <= 50; j++)
        {
            if (i != j && i + j == n)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}