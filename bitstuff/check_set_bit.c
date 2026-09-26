// check if the kth bit of an integer (uint32_t) is set
#include <stdio.h>
#include <stdlib.h>


typedef unsigned int uint;

int main(int argc, char *argv[]) {
    uint n, k;
    if (argc != 3) return 1;
    n = strtoul(argv[1], NULL, 10);
    k = strtod(argv[2], NULL);

    if (k <= 0) return 1;

    printf("Bit at position %ld is %s.", 
        k, 
        ((n >> (k - 1)) & 1)          // actual set bit check logic.
        ? "set" : "unset"
    );

    return 0;
}