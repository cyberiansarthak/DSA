// OPERATIONS OF STACK
//  STACK OF LINKED LIST
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void print(struct node *ptr)
{
    while (ptr != NULL)
    {

        printf("THE ELEMENT OF THESE NODES  : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
// ISEMPTY
int isEmpty(struct node *ptr)
{

    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// ISFULL
int isFull(struct node *ptr)
{
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// PUSH
struct node *push(struct node *head, int val)
{

    if(isFull(head))
    {
        printf("THE STACK IS IN OVERFLOW CONDITION");
    }
    else
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = val;
        ptr->next = head;
        head = ptr;
        return head;
    }
}
// POP
struct node *pop(struct node *head)
{

    if (isEmpty(head))
    {
        printf("THE STACK IS IN UNDERFLOW CONDITION");
    }
    else
    {
        struct node *ptr;
        struct node *ptr2;
        ptr = head;
        ptr2 = head->next;
        head->next = ptr2->next;
        head = ptr2;
        free(ptr);

        return head;
    }
}
//PEAK
void peak(int indexno)
{
        int i=0;
        struct node* ptr;
        for(i=0;i<indexno-1&&ptr!=NULL;i++)
        {
            ptr=ptr->next;
         
        }
        if(ptr!=NULL)
        {
        printf("THE ELEMENT ON GIVEN INDEX IS :%d\n",ptr->data);
        }
    }


//STACKBOTTOM
void stackBottom(struct node*ptr)
{
    struct node *p=ptr;
    while(p!= NULL)
    {
        p=p->next;
    }
    printf("THE LAST ELEMENT OF THIS STACK IS : %d\n",ptr->data);
}
//STACKTOP
void stackTop(struct node*ptr)
{
    struct node*p=ptr;
    p->next=ptr->next;
    printf("THE FIRST ELEMENT OF THIS STACK IS : %d\n",ptr->data);
}

int main()
{
    struct node *head = NULL;
    printf("THE STACK IS OVERFLOW:  %d\n", isFull(head));
    printf("THE STACK IS UNDERFLOW: %d\n", isEmpty(head));
    head = push(head, 26);
    printf("THE STACK IS OVERFLOW:  %d\n", isFull(head));
    printf("THE STACK IS UNDERFLOW: %d\n", isEmpty(head));
    head = push(head, 27);
    head = push(head, 28);
    head = push(head, 29);
    head = push(head, 30);
    head = push(head, 31);
    print(head);
    head=pop(head);
    print(head);
    peak(2);
    stackBottom(head);
    stackTop(head);

    return 0;
}