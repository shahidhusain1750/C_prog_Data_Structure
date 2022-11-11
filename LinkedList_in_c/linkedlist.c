#include <stdio.h>
#include <malloc.h>

struct node *start = NULL;
struct node *create_ll(struct node *start);
struct node *display(struct node *start);
struct node *insert_beg(struct node *start);
struct node *insert_end(struct node *start);
struct node *insert_before(struct node *start);
struct node *insert_after(struct node *start);

struct node
{
    int data;
    struct node *next;
};

int main()
{
    start = create_ll(start);
    start = display(start);
    start = insert_beg(start);
    start = insert_end(start);
    start = insert_before(start);
    start = display(start);
    start = insert_after(start);
    start = display(start);
    return 0;
}

struct node *create_ll(struct node *start)
{
    struct node *ptr, *newNode;
    int num;
    printf("Enter a num or -1 to Exit\n");
    scanf("%d", &num);
    while (num != -1)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = num;
        if (start == NULL)
        {
            start = newNode;
            newNode->next = NULL;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
            newNode->next = NULL;
        }
        printf("Enter a num or -1 to Exit\n");
        scanf("%d", &num);
    }
    return start;
}

struct node *display(struct node *start)
{
    struct node *ptr;
    printf("Elements in linked list are\n");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    return start;
}

struct node *insert_beg(struct node *start)
{
    struct node *newNode;
    int num;
    printf("\nEnter a new num in begin\n");
    scanf("%d", &num);
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = num;
    newNode->next = NULL;
    return start;
}

struct node *insert_end(struct node *start)
{
    struct node *ptr, *newNode;
    int num;
    printf("Enter a new num in end\n");
    scanf("%d", &num);
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = num;
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
    newNode->next = NULL;
    return start;
}

struct node *insert_before(struct node *start)
{
    struct node *ptr, *preptr, *newNode;
    int num, val;
    printf("\nEnter the Data\n");
    scanf("%d", &num);
    printf("Ente the value to before Inserta data\n");
    scanf("%d", &val);
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = num;
    ptr = start;
    while (ptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = newNode;
    newNode->next = ptr;

    return start;
}

struct node *insert_after(struct node *start)
{
    struct node *ptr, *preptr, *newNode;
    int num, val;
    printf("\nEnter a Data\n");
    scanf("%d", &num);
    printf("Enter the value to be Insert after the data\n");
    scanf("%d", &num);
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = num;
    ptr = start;
    while (preptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = newNode;
    newNode->next = ptr;
    return start;
}