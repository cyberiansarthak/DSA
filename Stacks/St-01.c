//IMPLIMENTATION OF STACK
// STACK OF ARRAY
#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int main()
{
    struct stack *s= (struct stack*)malloc(sizeof(struct stack));
    int arr= (int *)malloc(s->size*sizeof(int));// WE TAKE DYNAMIC MEMORY IN HEAP FOR OUR ARRAY
    s->size=10;// MEANS ARRAY IS OF SIZE 10
    s->top=-1;// MEANS INTITIALLY THE STACK IS EMPTY
}






































































