// OPERATIONS IN CIRCULAR LINKED LIST
// CIRCULAR LINKED LIST
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void print(struct node *head)
{
   //

   //THESE NODES  : %d\n", ptr->data);// BCOZ THE PTR= HEAD  SO THE WHILE LOOP COND. IS ALWAYS TRUE .
   //                                 // SO WE MOVE PTR ONE STEP FORWARD THEN PASS THROUGH WHILE LOOP.

   //
   //

   //OF THESE NODES  : %d\n", ptr->data);
   //
   //

    // ALTERNATE METHOD
   // do
   // {
//
   //     printf("THE ELEMENT OF THESE NODES  : %d\n", ptr->data);
   //     ptr = ptr->next;
   // } while (ptr != head);
}

// INSERTION AT STARTING
struct node *starting_pos(struct node *first)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = first->next;
    ptr->data = 13;
    while (p->next != first)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = first;
    first = ptr;

    return first;
}
int main()
{

    struct node *first, *second, *third, *fourth;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Linking
    first->data = 14;
    first->next = second;

    second->data = 15;
    second->next = third;

    third->data = 16;
    third->next = fourth;

    fourth->data = 17;
    fourth->next = first; // the last node point the first one in circular linked list
    printf("THE ORGINAL LIMKED LIST \n");
    print(first);
    first = starting_pos(first);
    printf(" THE NEW LIKED LIST\n");
    print(first);
}