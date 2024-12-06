
#include <stdio.h>
#include <string.h>

int control() {
    char line[100];
    printf("Enter a line of code (if, else, for, while): ");
    fgets(line, 100, stdin);

    if (strstr(line, "if") != NULL) {
        printf("Valid 'if' structure detected.\n");
    } else if (strstr(line, "else") != NULL) {
        printf("Valid 'else' structure detected.\n");
    } else if (strstr(line, "for") != NULL) {
        printf("Valid 'for' loop detected.\n");
    } else if (strstr(line, "while") != NULL) {
        printf("Valid 'while' loop detected.\n");
    } else {
        printf("No recognized control structure found.\n");
    }

    return 0;
}
