#include "stdio.h"

void foo(int *a) {
    *a = *a + 1; // acessa variavel global
}

int main() {
    int a=0;
    int b=0;
    while (1) {
        foo(&a);
        
        if (a > 5) {
            b = 1;
        }
        printf("a: %d, b: %d\n", a, b);
    }
    return 0;
}
