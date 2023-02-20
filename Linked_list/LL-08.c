// DOUBLY LINKED LIST
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *previous;  //DOUBLY LINKED LIST HAVE A REFRENCE OF PREVIOUS NODE
};
 void print(struct node *head,struct node *head2)
 {   
    // PRINT FIRST TO FOURTH
    while (head!= NULL)
    {
        printf(" the elements of doubly linked list: %d \n",head->data);
        head= head->next;
    }
    // PRINT REVERSE FOURTH TO FIRST
    while ( head2!= NULL)
    {
        printf(" the elements of doubly linked list: %d \n",head2->data);
        head2= head2->previous;
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
    first->previous = NULL; // WE RECOGNIZE HEAD OF DOUBLY LINKED LIST BY THIS LINE

    second->data = 15;
    second->previous = first;// EACH NODE ALSO POINT THE PREVIOUS NODE IN DOUBLY LINKED LIST
    second->next = third;

    third->data = 16;
    third->previous = second;
    third->next = fourth;

    fourth->data = 17;
    fourth->previous = third;
    fourth->next = NULL;
    print(first,fourth);
}