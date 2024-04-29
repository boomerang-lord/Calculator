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
}

int main()
{
    
    printf("Hello world\n");

}