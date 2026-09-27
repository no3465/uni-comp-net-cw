// check if the kth bit of an integer (uint32_t) is set
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, m;
    if (argc != 3) return 1;
    n = atoi(argv[1]);              // not safe but whatever
    m = atoi(argv[2]);

    if (((n >> 31) & 1) == ((m >> 31) & 1)) {
        printf("sign of %d == sign of %d\n", n, m);
    } else {
        printf("sign not same.\n");
    }

    return 0;
}