// LINKED LIST USING FOR LOOP
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void print(struct Node *ptr)
{
    while (ptr != NULL)
    {

        printf("THE ELEMENT OF THESE NODES  : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()

{
    struct Node *head, *temp;
    int i, n = 0;
    printf(" ENTER THE NUMBER OF NODE YOU WANT:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
        printf(" enter the correct value of the data of node %d :", i);
        scanf("%d", &(newnode->data));
        if (i == 1)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    temp->next = NULL;
    temp = head;
    print(head);
}