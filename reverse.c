#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *next;
} *head = NULL;

void printList()
{
    struct node *ptr = head;

    printf("Reversed string \t : ");
    while (ptr != NULL)
    {
        printf("%c", ptr->data);
        ptr = ptr->next;
    }
}

void insert(char temp)
{
    struct node *link = (struct node *)malloc(sizeof(struct node));

    link->data = temp;

    link->next = head;

    head = link;
}

void process(char *input)
{
    int count = 0;

    while (input[count] != '\0')
    {
        insert(input[count]);
        count++;
    }

    printList();
    printf("\n");
}

int main(int argc, char *argv[])
{

    if (argc == 2)
    {
        printf("The input string \t : %s\n", argv[1]);
        process(argv[1]);
    }
    else if (argc > 2)
    {
        printf("Too many arguments supplied.\n");
    }
    else
    {
        printf(" No arguments passed. Kindly pass a single argument \n");
    }

    return (0);
}
