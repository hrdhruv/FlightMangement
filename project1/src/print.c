#include"../include/print.h"
#include"../include/variable.h"
#include"../include/interpreter.h"
#include<stdio.h>

void print_variable(char *token)
{
    int f= get_variable_value(token[0]);
    printf("%d\n",f);                   // printing value
}
