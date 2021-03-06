// pointer-incr.cpp by Chirag
// updated 2021-09-18
#include <cstdio>
#include <cstdint>

void printp(uint8_t *p) {
    printf("pointer is %p, value is %d\n", p, *p);
}

int main()
{
    uint8_t arr[5] = { 1, 2, 3, 4, 5 };
    uint8_t *p = arr;
    printp(++p);
    printp(++p);
    printp(++p);

    return 0;
}
