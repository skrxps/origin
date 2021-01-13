#include<stdio.h>
#include<stdlib.h>
#define MAX_LEN 100
#define CRE 10

typedef struct stack
{
    int len; //current size
    int *top; 
    int *base;
    int stacksize;
} stack;

void create(stack *s)
{
    // create space for stack
    s->base = (int *)malloc(MAX_LEN*sizeof(int));

    if(!s->base)
    {
        printf("error!\n");
        exit(0);
    }

    s->top = s->base;
    s->len = 0;
    s->stacksize = MAX_LEN;
}

void push(stack *s, int e)
{
    if(s->top-s->base >= MAX_LEN)
    {
        s->base = (int *)realloc(s->base, (s->stacksize+CRE)*sizeof(int));
        if(!s->base)
        {
            printf("error!\n");
            exit(0);
        }

        s->stacksize += CRE;
    }

    *s->top = e;
    s->top++;
}

void pop(stack *s, int *e)
{
    if(s->base == s->top)
    {
        printf("error!\n");
    }
    else
    {
        s->top--;
        *e = *s->top;
        s->len--;
    } 
}

void stacklen(stack *s)
{
    printf("total size of stack is %d\n", s->stacksize);
    printf("current size of stack is %d\n", s->len);
}

void destroy(stack *s)
{
    int i;
    free(s->base);
    printf("destroy over!\n");
}

void clear(stack *s)
{
    s->top = s->base;
    s->len = 0;
    s->stacksize = MAX_LEN;
    printf("clear over!\n");
}

int main()
{
    stack s;
    int e,f;
    create(&s);
    printf("create stack over!\n");
    printf("input e:\n");
    scanf("%d", &e);
    push(&s, e);
    pop(&s,&f);
    printf("f is %d\n clear stack\n", f);
    clear(&s);
    destroy(&s);
    return 0;
}