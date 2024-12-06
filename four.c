#include <stdio.h>

int four() {
    int a = 5, b = 2, c, d;
    printf("Tac for d = a + b * 2\n");

    c = b*2;
    d = a + c;

    printf("%d", d);
    return 0;
}
