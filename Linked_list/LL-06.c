//CIRCULAR LINKED LIST
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void print(struct node *head)
{
    struct node *ptr= head;
    
     printf("THE ELEMENT OF THESE NODES  : %d\n", ptr->data);// BCOZ THE PTR= HEAD  SO THE WHILE LOOP COND. IS ALWAYS TRUE .
        ptr = ptr->next;                                     // SO WE MOVE PTR ONE STEP FORWARD THEN PASS THROUGH WHILE LOOP.
    
    while (ptr != head)
    {

        printf("THE ELEMENT OF THESE NODES  : %d\n", ptr->data);
        ptr = ptr->next;
    }
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
    fourth->next = first;// the last node point the first one in circular linked list
 

    print(first);
}