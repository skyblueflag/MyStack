#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "StackLink.h"

int main(void){
    StackLink *S = (StackLink*)malloc(sizeof(StackLink));
    InitStackLink(S);
    for(int i = 1;i < 6;i++){
        PushStackLink(S, i);
    }
    Display(S);
    printf("\n");
    PopStackLink(S);
    Display(S);
    
    return 0;
}