#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int num1;
    int num2;
    int num3;
} Stack;

    


Stack * create_Stack(int a, int b, int c)
{
    Stack * stack = malloc(sizeof(Stack));
    if(stack == NULL){
        return NULL;
    }
    stack->num1 = a;
    stack->num2 = b;
    stack->num3 = c;

    return stack;
}

int main()
{
    
    printf("Hello world\n");

}