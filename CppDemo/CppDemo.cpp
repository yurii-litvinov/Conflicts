#include <stdio.h>
#include "stack.h"

using namespace stack;

int main()
{
	Stack *stack = createStack();
	push(stack, 1);
	push(stack, 2);
	push(stack, 3);
	bool popResult = false;
	//printf("isEmpty: %d\n", isEmpty(stack));
	//printf("Result: %d\n", pop(stack, popResult));
	//printf("Result: %d\n", pop(stack, popResult));
	//printf("Result: %d\n", pop(stack, popResult));
	//printf("Result: %d\n", pop(stack, popResult));
	return 0;
}
