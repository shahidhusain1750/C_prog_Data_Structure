#include <stdio.h>

void insertionsort(int a[], int n);
void display(int a[], int n);

int main(int argc, char const *argv[])
{
    int a[20];
    int i, n;

    printf("Enter the size of array :");
    scanf("%d", &n);

    printf("Enter the number of elemnets :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    display(a, n);
    insertionsort(a, n);
    display(a, n);

    return 0;
}

void display(int a[], int n)
{
    printf("\nElements in array are :");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void insertionsort(int a[], int n)
{
    int i, j, temp;

    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (temp < a[j] && (j >= 0))
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}
