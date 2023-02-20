// INSERTION
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
// INSERTION AT STARTING
 struct  node *  starting_pos( struct node *first)
{
   struct node *ptr = (struct node *)malloc(sizeof(struct node));
   ptr->data = 13;
  ptr->next = first;
  first = ptr;
 return ptr;
}
// INSERTION AT THE INDEX
struct node * attheindex( struct node * first ,int index)
{
    int pt=0;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p= first ;
   while( pt != index-1 )
   {
      p=p-> next;
      pt++;
  }
   ptr->data = 10;
   ptr->next = p-> next;
   p->next = ptr;
  
 return first;

}
 //INSERTION AT THE END
 struct node *attheend(struct node *first)
 {
 struct node *ptr = (struct node *)malloc(sizeof(struct node));
 struct node *p = first;
 ptr->data=18;
    while( p->next != NULL )  {
 p = p->next ;
  }
    p->next= ptr;
    ptr->next= NULL;
    return first;
 }
// INSERTION AFTER  THE NODE
struct node *afterpreviousnode(struct node *head, struct node *previousnode)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    ptr->data = 18;

    ptr->next = previousnode->next;
    previousnode->next = ptr;

    return previousnode;
}

void print(struct node *ptr)
{
    while (ptr != NULL)
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
    fourth->next = NULL;
    printf(" THE ORGINAL LINKED LIST \n");
    print(first);
    // first = starting_pos(first);
     first = attheindex(first,1);
    // first = attheend(first);
    //afterpreviousnode(first, second);
    printf(" THE NEW LINKED LIST \n");

    print(first);
}
