#include <stdio.h>

int five() {
    int num;
    float decimal;
    char letter;

    printf("Enter an integer: ");
    scanf(" %d", &num);

    printf("Enter an float: ");
    scanf(" %f", &decimal);

    printf("Enter an char: ");
    scanf(" %c", &letter);

    printf("Type of number: %s\n", (sizeof(num) == sizeof(int))? "int" : "unknown");
    printf("Type of decimal: %s\n", (sizeof(decimal) == sizeof(float))? "float" : "unknown");
    printf("Type of letter: %s\n", (sizeof(letter) == sizeof(char))? "char" : "unknown");
    return 0;
}
