#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[100];
    int n, num;
    int swap;

    printf("Enter the values\n");
    scanf("%d", &n);

    printf("Enter the number of integer\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

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

    printf("After bubble sort\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
