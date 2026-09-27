#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;

int main(int argc, char *argv[]) {
    uint n;
    if (argc != 2) return 1;
    n = strtoul(argv[1], NULL, 10);
    
    int is_pow_of_2 = (n & (n - 1)) == 0;                           // accidentally stumbled upon this trick online.

    printf("%u is %s power of 2.", n, is_pow_of_2 ? "a" : "not a");
}