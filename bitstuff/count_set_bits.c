#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;

int main(int argc, char *argv[]) {
    uint n;
    if (argc != 2) return 1;
    n = strtoul(argv[1], NULL, 10);
    
    printf("Number of set bits in %u is:", n);

    uint count = 0;
    while (n) {
        (n & 1) ? count++ : 0;
        n >>= 1;
    }

    printf(" %u\n", count);
}