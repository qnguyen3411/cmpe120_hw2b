#include <stdio.h>

/* diff(a, b) returns the absolute difference between a & b*/
extern unsigned int diff(unsigned int a, unsigned int b);

int main() {
    unsigned int a, b, result;

    printf("simple_op demo by Quang Nguyen on %s %s\n", __DATE__, __TIME__);

    printf("Please input a : ");
    scanf("%u", &a);

    printf("Please input b : ");
    scanf("%u", &b);

    result = diff(a, b)
    printf("diff(%u, %u) = %u (0x%08x)\n", a, b, result, result);
    return 0;
}
