#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "stack1.h"

// 初始化
void InitStack(Stack * S)
{
	// 申请空间
	S->data = (Elements *) malloc(sizeof(Elements));
	// 若申请空间失败
	if (S == NULL)
	{
		printf("栈为空，初始化失败！\n");
		return;
	}
	// 栈顶元素等于栈底元素及栈为空
	S->Top = S->Button = 0;
	// 栈中一次可容纳的最多元素
	S->StackSize = 5;
}

// 入栈，e为要压入栈中的元素
void PushStack(Stack * S, Elements e)
{
	// 判断栈是否为空
	if (S == NULL)
	{
		printf("栈为空！\n");
		return;
	}
	// 判断空间是否已满
	if (S->Top >= S->StackSize)
	{
		S->data = (Elements *) realloc(S->data, (S->StackSize + 5) * sizeof(Elements));
		S->StackSize += 5;
	}
	S->Top++;
	S->data[S->Top] = e;
}

// 出栈
void PopStack(Stack * S)
{
	// 判断栈是否为空
	if (S == NULL)
	{
		printf("栈为空!\n");
		return;
	}
	S->Top--;
	S->StackSize--;
}

// 获取栈顶元素
void GetStackTop(Stack * S)
{
	// 判断栈是否为空
	if (S == NULL)
	{
		printf("栈为空！\n");
		return 0;
	}
	printf("栈顶元素为：%d\n", S->data[S->Top]);
}

// 打印栈
void Display(Stack * S)
{
	printf("数据域 = {");
	for (int i = 1; i <= S->Top; i++)
	{
		printf("%d", S->data[i]);
		if (i < S->Top)
		{
			printf(", ");
		}
	}
	printf("}\n");
	printf("栈的容量：%d\n", S->StackSize);
	printf("栈元素个数：%d\n", S->Top);
	printf("\n");
}
