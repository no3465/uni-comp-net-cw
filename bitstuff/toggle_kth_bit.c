#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;

int main(int argc, char *argv[]) {
    uint n, k;
    if (argc != 3) return 1;
    n = strtoul(argv[1], NULL, 10);
    k = strtod(argv[2], NULL);

    if (k <= 0) return 1;
    printf("Number before toggling bit at pos %d: %d\n", k, n);
    // clear the bit
    n ^= (1 << (k - 1));
    printf("Number after toggling bit at pos %d: %d\n", k, n);

}