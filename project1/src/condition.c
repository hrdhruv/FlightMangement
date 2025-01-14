#include<stdio.h>
#include <stdbool.h>
#include <string.h>
#include "../include/condition.h"
#include "../include/variable.h"

// Function to evaluate conditional expressions
bool evaluate_condition(int x, char *op, int y) {
    if (strcmp(op, "==") == 0) {                     // here using strcmp we are peerforming condiional operations
        return x == y;
    } else if (strcmp(op, "!=") == 0) {
        return x != y;
    } else if (strcmp(op, "<") == 0) {
        return x < y;
    } else if (strcmp(op, ">") == 0) {
        return x > y;
    } else if (strcmp(op, "<=") == 0) {
        return x <= y;
    } else if (strcmp(op, ">=") == 0) {
        return x >= y;
    } else {
        printf("Error: Unsupported comparison operator '%s'.\n", op);
        return false;
    }
}

