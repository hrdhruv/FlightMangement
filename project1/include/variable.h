#ifndef VARIABLE_H
#define VARIABLE_H

typedef struct var{
    int a;
} var;

void create_variable(var ** temp);
void assign_variable(char *token, int value);
int get_variable_value(char var_name);

#endif /* VARIABLE_H */
