#include <stdio.h>
#include <stdlib.h>
#include "../include/interpreter.h"  
#include "../include/variable.h"     
#include <string.h>

int n = 25;  

void create_variable(var **temp)
{
    n = n + 5;  
    temp = (var **)(realloc(temp, sizeof(var *) * n));  // Reallocate memory for 'temp' with a larger size
}

void assign_variable(char *token, int value)
{
    int j = token[0] - 'a';  // Calculate index 'j' based on the first character of 'token'
    variables[j]->a = value;  // Assign 'value' to the 'a' field of the 'j'-th element in the 'variables' array
}

int get_variable_value(char var_name)
{
    return variables[var_name - 'a']->a;  // Retrieve the 'a' field of the variable specified by 'var_name'
}

