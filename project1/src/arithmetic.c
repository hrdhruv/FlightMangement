#include <stdio.h>
#include <string.h>
#include "../include/arithmetic.h"
#include "../include/variable.h"

// Function to perform arithmetic operations
int perform_arithmetic(int x, char *op, int y) {
    if (strcmp(op, "+") == 0) {                       //here using strcmp we are checking charcter of op and based on that we are applying operations
        return x + y;
    } else if (strcmp(op, "-") == 0) {            
        return x - y;
    } else if (strcmp(op, "*") == 0) {
        return x * y;
    } else if (strcmp(op, "/") == 0) {
        if (y != 0) {
            return x / y;
        } else {
            printf("Error: Division by zero.\n");
            return 0;
        }
    } else {
        printf("Error: Unsupported arithmetic operator '%s'.\n", op);
        return 0;
    }
}

