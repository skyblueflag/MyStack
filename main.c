#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "stack1.h"
int main()
{
	Stack *S = (Stack *) malloc(sizeof(Stack));
	InitStack(S);
	for (int i = 1; i < 6; i++)
	{
		PushStack(S, i);
	}
	int temp = S->Top;
	GetStackTop(S);
	Display(S);
	for (int i = 0; i < temp; i++)
	{
		PopStack(S);
	}
	Display(S);
	return 0;
}
