#include <stdio.h>

int main(void){
    int my_integer = 42;
    int * int_ptr = NULL;

    printf("NULL ptr : 0x%p\r\n", int_ptr);
    int_ptr = &my_integer;
    printf("ptr = &my_integer : 0x%p\r\n", int_ptr);

    return 0;
}

/*
Output
NULL ptr : 0x00000000
ptr = &my_integer : 0x0133F9A0
*/