#include <stdio.h>
#include <stdint.h>

int main(void){
    int a = 0;
    uint8_t b = 0;
    long c = 0;
    double d = 0;
    int * ptr = &a;

    printf("Variable 'int a' with a size of %d bytes is located at address 0x%p, contains %d\r\n", sizeof(a), &a, a);
    printf("Variable 'uint8_t b' with a size of %d bytes is located at address 0x%p, contains %d\r\n", sizeof(b), &b, b);
    printf("Variable 'long c' with a size of %d bytes is located at address 0x%p, contains %d\r\n", sizeof(c), &c, c);
    printf("Variable 'double d' with a size of %d bytes is located at address 0x%p, contains %f\r\n", sizeof(d), &d, d);
    printf("Variable 'int * ptr' with a size of %d bytes is located at address 0x%p, contains 0x%p\r\n", sizeof(ptr), &ptr, ptr);

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