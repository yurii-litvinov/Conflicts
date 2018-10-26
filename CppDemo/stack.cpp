#include "stack.h"

struct StackElement;

struct stack::Stack
{
	StackElement *head = nullptr;
};

struct StackElement
{
	int data = 0;
	StackElement *next = nullptr;
};

stack::Stack *stack::createStack()
{
	return new Stack;
}

void stack::push(stack::Stack *stack, int data)
{
	auto newElement = new StackElement{ data, stack->head };
	stack->head = newElement;
}

int pop(stack::Stack &stack, bool &result)
{
	if (stack.head == nullptr)
	{
		result = false;
		return -1;
	}
	StackElement *temp = stack.head;
	stack.head = stack.head->next;
	const int value = temp->data;
	delete temp;
	result = true;
	return value;
}

bool isEmpty(stack::Stack stack)
{
	return stack.head == nullptr;
}

void deleteStack(stack::Stack &stack)
{
	while (stack.head != nullptr)
	{
		StackElement *temp = stack.head;
		stack.head = temp->next;
		delete temp;
	}
}
