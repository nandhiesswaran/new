#include <stdio.h>
#include <stdlib.h>

int seven()
{
    char tac[256];
    printf("Enter 3 address code: ");
    fgets(tac, sizeof(tac), stdin);

    char operations[16], operand1[16],operand2[16], result[16];
    sscanf(tac, "%s %s %s %s", operations, operand1, operand2, result);
    if(strcmp(operations, "ADD") == 0) {
        printf("MOV AX, %s", operand1);
        printf("ADD AX, %s", operand2);
        printf("MOV, %s", result);
    }
    else if(strcmp(operations, "SUB") == 0) {
        printf("MOV AX, %s", operand1);
        printf("SUB AX, %s", operand2);
        printf("MOV, %s", result);
    } else if(strcmp(operations, "MUL") == 0) {
        printf("MOV AX, %s", operand1);
        printf("MUL AX, %s", operand2);
        printf("MOV, %s", result);
    } else if(strcmp(operations, "DIV") == 0) {
        printf("MOV AX, %s", operand1);
        printf("DIV AX, %s", operand2);
        printf("MOV, %s", result);
    } else {
        printf("Invalid");
    }
    return 0;
}
