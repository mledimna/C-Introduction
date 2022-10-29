#include <stdio.h>
#include <stdint.h>

#define VAR_TYPE uint16_t

// Global variables
char *str = "I'm a string";

int main(void)
{
    // Local variables
    int a = 0;
    uint8_t b = 0;
    long c = 0;
    double d = 0;
    int *ptr = &a;

    printf("Variable 'int a' with a size of %lu bytes is located at address 0x%p, contains %d\r\n", sizeof(a), &a, a);
    printf("Variable 'uint8_t b' with a size of %lu bytes is located at address 0x%p, contains %d\r\n", sizeof(b), &b, b);
    printf("Variable 'long c' with a size of %lu bytes is located at address 0x%p, contains %ld\r\n", sizeof(c), &c, c);
    printf("Variable 'double d' with a size of %lu bytes is located at address 0x%p, contains %f\r\n", sizeof(d), &d, d);
    printf("Variable 'int * ptr' with a size of %lu bytes is located at address 0x%p, contains 0x%p\r\n", sizeof(ptr), &ptr, ptr);

    VAR_TYPE var = 0xDA56;
    size_t var_sz = sizeof(VAR_TYPE);
    uint8_t *pointer = (uint8_t *)(&var);

    for (int i = 0; i < var_sz; i++)
        printf("Address %p (base + %d) : 0x%X\r\n", (uint8_t *)(pointer + i), i, *(pointer + i));

    return 0;
}

/*
Output
Variable 'int a' with a size of 4 bytes is located at address 0x0080F7AC, contains 0
Variable 'uint8_t b' with a size of 1 bytes is located at address 0x0080F7B3, contains 0
Variable 'long c' with a size of 4 bytes is located at address 0x0080F7A8, contains 0
Variable 'double d' with a size of 8 bytes is located at address 0x0080F79C, contains 0.000000
Variable 'int * ptr' with a size of 4 bytes is located at address 0x0080F7A4, contains 0x0080F7AC
*/