#ifndef STACK_H
#define STACK_H

enum { TRUE = 1, FALSE = 0 };
enum { MAX_NUMS = 8 };

void push(int n);
void print(void);
int is_empty(void);
int pop(void);
int search(int n);


#endif /* STACK_H */

