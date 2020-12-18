#include <stdio.h>
#include <assert.h>
#include "stack.h"

int main(void) 
{
    assert(search(88) == FALSE);
    push(88);
    assert(search(88) != FALSE);
    push(44);
    assert(search(44) != FALSE);
    push(12);
    assert(search(12) != FALSE);

    print();

    assert(12 == pop());
    assert(search(12) == FALSE);
    assert(pop() == 44);
    assert(search(44) == FALSE);
    assert(pop() == 88);
    assert(search(88) == FALSE);

    print();

    return 0;
}

