#ifndef STACK1_H_
#define STACK1_H_

typedef int Elements;
typedef struct Stack
{
	Elements *data;				// 数据域
	int Top;					// 栈顶元素
	int Button;					// 栈底元素
	int StackSize;				// 栈的容量
} Stack;

// 栈的初始化
void InitStack(Stack *);
// 入栈
void PushStack(Stack *, Elements);
// 出栈
void PopStack(Stack *);
// 获取栈顶元素
void GetStackTop(Stack *);
// 打印栈
void Display(Stack *);

#endif // STACK1_H_
