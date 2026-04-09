#include <stdio.h>

int main() {
    int val = 7;
    int otther = 77;

    const int *const p =&val;

    printf("%d\n", *p);
    return 0;
}
