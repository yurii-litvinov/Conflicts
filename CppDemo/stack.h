#pragma once

namespace stack
{

struct Stack;

/// Creates a new instance of stack.
Stack *createStack();

/// Pushes element to a stack
void push(Stack *stack, int data);

}
