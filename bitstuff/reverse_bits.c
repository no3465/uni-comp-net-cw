// check if the kth bit of an integer (uint32_t) is set
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, r = 0;
    if (argc != 2) return 1;
    n = atoi(argv[1]);              // not safe but whatever

    printf("n: %d\n", n);
    while (n) {
        r |= (n & 1);
        n >>= 1;
        if (n) r <<= 1;
    }
    printf("r: %d\n", r);
    return 0;
}