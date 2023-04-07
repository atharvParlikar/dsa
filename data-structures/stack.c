#include <stdio.h>
#include <stdlib.h>

#define MAX 100


struct stack {
  int items[MAX];
  int top;
};
typedef struct stack st;

void createEmeptyStack(st *s) {
  s->top = -1;
}

void push(st *s, int value) {
  s->top++;
  s->items[s->top] = value;
}

int pop(st *s) {
  int item = s->items[s->top];
  s->top--;
  return item;
}

void printStack(st *s) {
  for (int i = 0; i <= s->top; i++) {
    printf("%d\n", s->items[i]);
  }
}

int main()
{
  st *s = (st *)malloc(sizeof(st));
  push(s, 10);
  push(s, 12);
  push(s, 50);
  push(s, 00);
  push(s, 1560);
  printStack(s);
  printf("=== after popping ===\n");
  pop(s);
  pop(s);
  int last = pop(s);
  printStack(s);
  printf("last: %d\n", last);
  return 0;
}
