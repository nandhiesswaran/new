#include <stdio.h>
    int main() {
    int a = 5, b = 10, c, d;
    
    printf("Generating TAC for the expression: d = a + b * 2\n");
 
    printf("t1 = b * 2\n"); // t1 = b * 2
    printf("t2 = a + t1\n"); // t2 = a + t1
    printf("d = t2\n");
    
    c = b * 2; // t1 = b * 2
    d = a + c; // t2 = a + t1, d = t2

    printf("Result of the expression d = a + b * 2 is: d = %d\n", d);
    return 0;
}
