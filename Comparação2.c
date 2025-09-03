#include <stdio.h>

int main() {
    int num = 10;
    float result = 10.0;

    // transforma int em float e compara com o outro float
    int comparison = (float)num == result;

    printf("num == result: %d\n", comparison);

    return 0;
}
