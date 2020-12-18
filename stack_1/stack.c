#include <assert.h>
#include <stdio.h>
#include "stack.h"


static int s_nums[MAX_NUMS];

size_t s_num_count = 0;

void push(int n)
{
    assert(s_num_count < MAX_NUMS);
    s_nums[s_num_count++] = n;
}

void print(void)
{
    size_t i;

    printf("stack print\n");
    for (i = 0; i < s_num_count; ++i) {
        printf("%d\n", s_nums[i]);
    }
    printf("end\n");
}

int is_empty(void)
{
    return (s_num_count == 0);
}

int pop(void)
{
    assert(is_empty() == FALSE);

    return s_nums[--s_num_count];
}

int search(int n)
{
    int temp_stack[MAX_NUMS];
    size_t temp_stack_count = 0;
    int num;

    while (s_num_count != 0) {
        num = pop();
        temp_stack[temp_stack_count++] = num;
        if (num == n) {
            while (temp_stack_count != 0) {
                push(temp_stack[--temp_stack_count]);
            }
            return TRUE;
        }
    }
    
    while (temp_stack_count != 0) {
        push(temp_stack[--temp_stack_count]);
    }

    return FALSE;
}
