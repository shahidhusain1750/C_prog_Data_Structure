// linear search
#include <stdio.h>
int main()
{
    int a[5];
    int i, n, search;
    int flag = 1;
    printf("Enter a elements to store in array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Element you enterd\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("Enter the elements to search\n");
    scanf("%d", &search);
    printf("Now we perform linear search\n");
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == search)
        {
            printf("%d Elements found in %d location\n", search, i + 1);
            flag = 1;
            break;
        }
    }
    if (flag = 0)
    {
        printf("Elements not found\n");
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &a[i]);
        }
        return 0;
    }
}