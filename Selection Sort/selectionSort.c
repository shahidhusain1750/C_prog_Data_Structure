// selection sort
#include <stdio.h>
void selection_sort(int a[], int n);
int smallest(int a[], int counter, int k);
void display(int a[], int n);

int main(int argc, char const *argv[])
{
    int a[10], i, n;
    printf("Enter the size  of array :");
    scanf("%d", &n);

    printf("Enter the number of elements in array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    display(a, n);
    selection_sort(a, n);
    display(a, n);
    return 0;
}

void selection_sort(int a[], int n)
{
    int counter, pos, temp;
    for (counter = 0; counter < n; counter++)
    {
        printf("pass %d\t ", counter + 1);
        pos = smallest(a, counter, n);
        printf("pos = %d\n", pos);

        temp = a[counter];
        a[counter] = a[pos];
        a[pos] = temp;
        printf("after pass %d\n", counter + 1);
        display(a, n);
    }
}

int smallest(int a[], int counter, int n)
{
    int pos = counter;
    int small = a[counter];
    int i;

    for (i = counter + 1; i < n; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
            pos = i;
        }
    }
    return pos;
}

void display(int a[], int n)
{
    printf("\nElements in array are   :");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n\n");
}