#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "StackLink.h"

/* 初始化栈 */
void InitStackLink(StackLink *S){
    /* 栈的初始大小 */
    S->StackLinkSize = 0;
    /* 初始结点的下一个结点为空 */
    S->Next = NULL;
    printf("初始化栈成功！\n");
}

/* 入栈,e为要入栈的元素 */
void PushStackLink(StackLink *S, Elements e){
    /* 创建一个新结点 */
    StackLink *p = (StackLink*)malloc(sizeof(StackLink));
    /* 将要插入的数据赋值给p的数据域 */
    p->data = e;
    /* 遍历栈到尾部 */
    while(S->Next){
        S = S->Next;
    }
    /* 将p结点链接到栈的顶部 */
    p->Next = S->Next;
    S->Next = p;
    /* 栈的容量+1 */
    ++S->StackLinkSize;
}

/* 出栈 */
void PopStackLink(StackLink *S){
    /* 判断栈是否为空 */
    if(S == NULL){
        printf("栈为空！\n");
        return;
    }
    /* 申请一个指针指向栈顶结点 */
    StackLink *p = (StackLink*)malloc(sizeof(StackLink));
    /* 遍历栈到尾结点的上一个结点 */
    while(S->Next->Next != NULL){
        S = S->Next;
    }
    p = S->Next;
    p->data = S->Next->data;
    /* 更新头结点 */
    S->Next = NULL;
    /* 栈的容量-1 */
    --S->StackLinkSize;
    /* 释放头结点 */
    free(p);
    printf("出栈成功！\n");
}

/* 获取栈的容量 */
int GetLength(StackLink *S){
    return S->StackLinkSize;
}

/* 打印栈 */
void Display(StackLink *S){
    StackLink *p = S;
    printf("栈的数据域 = {");
    while(p->Next){
        p = p->Next;
        printf("%d", p->data);
        if(p->Next != NULL){
            printf(", ");
        }
    }
    printf("}\n");
}