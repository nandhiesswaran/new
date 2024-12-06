
#include <stdio.h>
#include <ctype.h>

int validvar() {
    char var[100];
    int i = 0, valid = 1;
    scanf("%s", var);

    if (isalpha(var[0])) {
        while (var[i] != '\0') {
            if (!isalnum(var[i])) {
                valid = 0;
                break;
            }
            i++;
        }
    } else {
        valid = 0;
    }

    if (valid) printf("Valid variable\n");
    else printf("Invalid variable\n");

    return 0;
}
