// check if the kth bit of an integer (uint32_t) is set
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;

int main(int argc, char *argv[]) {
    uint n;
    if (argc != 2) return 1;
    n = strtoul(argv[1], NULL, 10);
    
    if (n == 0) {
        printf("anything except 0\n");
        return 1;
    }

    printf("Lowest set bit of %u is at position: ", n);

    int pos = 0;
    while (n && !(n & 1)) {
        pos++;
        n >>= 1;
    }

    printf("%d\n", pos);
    return 0;
}