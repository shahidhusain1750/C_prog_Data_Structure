#include <stdio.h>
int main()
{
    int a[100];
    int n, i, search;
    int low, high, mid;
    printf("Enter a number\n");
    scanf("%d", &n);

    printf("Enter number integers\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a elements to search\n");
    scanf("%d", &search);
    // binary search
    printf("Now we perform binary search\n");
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (a[mid] < search)
            low = mid + 1;
        else if (a[mid] == search)
        {
            printf("%d Elements found in %d location\n", search, mid + 1);
            break;
        }
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }
    if (low > high)
    {
        printf("Elements not found\n");
    }
    return 0;
}