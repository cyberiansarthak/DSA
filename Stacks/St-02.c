// OPEARTIONS IN STACK
// STACK OF ARRAY
#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
// IN ALL THESE OPERATIONS TIME COMPLEXITY IS O(1)
// ISEMPTY
int isEmpty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// ISFULL
int isFull(struct stack *s)
{
    if (s->top == s->size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// PUSH
void push(struct stack *s, int data)
{
    if (isFull(s))
    {
        printf("THE STACK IS OVERFLOW\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = data;
    }
}
// pop
void pop(struct stack *s)
{

    if (isEmpty(s))
    {
        printf("THE STACK IS underFLOW\n");
    }
    else
    {
        s->top--;
    }
}
// PEAK
void peak(struct stack *s, int givenindex)
{
    int z = s->top - givenindex + 1;
    printf(" the element on the given index is: %d", s->arr[z]);
}
// STACKTOP
void stackTop(struct stack *s)
{
    printf("THE TOP ELEMENT OF STACK :%d\n", s->arr[s->top]);
}

// STACKBOTTOM
void stackBottom(struct stack *s)
{
    printf("THE LAST ELEMENT OF STACK :%d\n", s->arr[0]);
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->arr = (int *)malloc(s->size * sizeof(int)); // WE TAKE DYNAMIC MEMORY IN HEAP FOR OUR ARRAY
    s->size = 10;                                  // MEANS ARRAY IS OF SIZE 10
    s->top = -1;                                   // MEANS INTITIALLY THE STACK IS EMPTY
    printf("THE STACK IS FULL AUR EMPTY\n");
    printf("the stack is empty\n %d\n", isEmpty(s));
    printf("the is stack is full\n%d\n", isFull(s));
    push(s, 31);
    push(s, 32);
    push(s, 33);
    push(s, 34);
    printf("the stack is empty\n %d\n", isEmpty(s));
    printf("%d\n", s->arr[0]);
    push(s, 35);
    pop(s);
    stackTop(s);
    stackBottom(s);
    peak(s, 3);
}