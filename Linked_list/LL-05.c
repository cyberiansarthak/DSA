// DELEATION
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
// DELETE THE FIRST NODE
 struct node *starting_pos(struct node *first)
{
   struct node *ptr;
   struct node * ptr2;
   ptr = first;
   ptr2= first->next;
   first->next= ptr2->next;
   first= ptr2;
   free(ptr);
    return first;
}
// DELETE AT THE INDEX
 struct node *attheindex(struct node *first, int index)
{
 int pt = 0;
 struct node *ptr;
 struct node *p = first;
 ptr = first->next;
 while (pt < index - 1)
{
    p = p->next;
    ptr = ptr->next;
    pt++;
}

 p->next = ptr->next;
 free(ptr);
   return first;
}
 //DELETE AT THE END
 struct node *attheend(struct node *first)
{
    struct node *ptr;
    struct node *p = first;
    ptr=first->next;
    while (ptr->next != NULL)
    {
        p = p->next;
        ptr=ptr->next;
    }
    p->next = NULL;

    free(ptr);
    return first;
}
// DELETE NODE WITH THE DATA
struct node *Deletebydata(struct node *first, int data)
{

    struct node *ptr;
    struct node *p = first;
    ptr = first->next;
    while (p->data != data && ptr->next != NULL)
    {
        p = p->next;
        ptr = ptr->next;
    }
    if (ptr->next != NULL)
    {
        p->next = ptr->next;
    }
    else
    {
        p->next = NULL;
    }
    free(ptr);

    return first;
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
    // first = attheindex(first, 2);
    // first = attheend(first);
    Deletebydata(first, 17);
    printf(" THE NEW LINKED LIST \n");

    print(first);
}
