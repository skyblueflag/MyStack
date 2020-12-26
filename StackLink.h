#ifndef STACKLINK_H_
#define STACKLINK_H_
/* 栈的链式存储结构 */
typedef int Elements;
typedef struct StackLink{
    Elements data;    /* 数据域 */ 
    struct StackLink *Next;    /* 指向下一个结点的指针 */
    int StackLinkSize;   /* 栈的容量 */
}StackLink;

/* 初始化栈 */
void InitStackLink(StackLink*);
/* 入栈 */
void PushStackLink(StackLink*, Elements);
/* 出栈 */
void PopStackLink(StackLink*);
/* 获取栈的容量 */
int GetLength(StackLink*);
/* 打印栈 */
void Display(StackLink*);

#endif//STACKLINK_H_