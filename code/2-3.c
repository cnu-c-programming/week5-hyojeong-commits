#include <stdio.h>

int main(){
    int a = 10, b = 20, c = 30, d= 40;
    int *arr[] = {&a, &b, &c, &d};
    int **pp = arr;

    int **base = arr;

    printf("%1d\n", (char *)00 - (char *)base);

    pp = pp + 1;
    printf("%1d\n", (char *)00 - (char *)base);

    pp = pp + 1;
    printf("%1d\n", (char *)00 - (char *)base);

    pp = pp + 1;
    printf("%1d\n", (char *)00 - (char *)base);

    return 0;

}
