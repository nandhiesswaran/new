#include <stdio.h>

int six() {
    int a = 5;
    int b = 3;

    int result1 = a + 10;
    int result2 = b * 0;

    int i, n = 10;
    int factor = 2;

    for(i = 0; i < n; i++) {
        a = i * 2;
    }

    int x = a * 2 + b * 0;
    printf("result1 - %d\n", result1);
    printf("result1 - %d\n", result2);
    printf("a - %d\n", a);
    printf("x - %d\n", x);
    return 0;
}
