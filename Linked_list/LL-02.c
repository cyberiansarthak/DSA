// LINEAR LINKED LIST

#include <stdio.h>
#include <stdlib.h> // FOR HEAP MEMORY ALLOCATION

struct Node // ITS BASICALLY A DATA TYPE
{
    char *Names;
    struct Node *Agla; // the data type of struct pointer is also the struct*
};
void Print(struct Node *ptr)
{
    while (ptr != NULL)
    {

        printf("%s\n", ptr->Names);
        ptr = ptr->Agla;
    }
}
 struct Node * addnode(struct Node* first){
     struct Node *head = first->Agla, *temp;
     struct Node *ptr2 = first->Agla;
    int i, n = 0;
    printf(" ENTER THE NUMBER OF NODE YOU WANT:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
        printf(" enter the correct value of the data of node %d :", i);
        scanf("%s", &(newnode->Names));
        if (i == 1)
        {
            head = temp = newnode;
        }
        else
        {
            temp->Agla = newnode;
            temp = newnode;
        }
    }
    temp->Agla = ptr2->Agla;
    temp = head;
    return head;
 }
int main()
{
    struct Node *first, *second, *third, *fourth;
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Linking
    first->Names = "sarthak";
    first->Agla = second;

    second->Names = "rohit";
    second->Agla = third;

    third->Names = "dev";
    third->Agla = fourth;

    fourth->Names = "raj";
    fourth->Agla = NULL;
    
    printf("\n");
    Print(first);
    addnode( first);
    Print(first);
}
