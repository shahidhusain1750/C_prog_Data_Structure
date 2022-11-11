// bubble sort
#include <stdio.h>
int main()
{
    int a[100];
    int i, j, n;
    int swap;
    printf("Enter a number\n");
    scanf("%d", &n);

    printf("Enter integers\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &a[i]);
    }

    printf("performing bubble sort\n");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
            }
        }
    }
    printf("Elements after bubble sort\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}