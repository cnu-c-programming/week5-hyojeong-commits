#include <stdio.h>

long my_strol(char *str, char **endptr){
    long res = 0;

   while (*str >= '0' && *str <= '9') { 
        res = res * 10 + (*str - 48);   
        str++;
    }
    *endptr = str; 
    return res;
}

int main(){
    char str[] = "2026hello";
    char *end;

    long val = my_strol(str, &end);

    printf("%1d %s\n", val, end);
    return 0;
}
