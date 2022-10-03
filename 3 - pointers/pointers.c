#include <stdio.h>

int main(void){
    int my_integer = 42;
    int * int_ptr = NULL;

    if (int_ptr == NULL) printf("ptr is NULL\r\n");
    else printf("ptr is not NULL\r\n");

    printf("NULL ptr : 0x%p\r\n", int_ptr);
    printf("Address ptr : 0x%p\r\n", &int_ptr);
    
    int_ptr = &my_integer;

    if (int_ptr == NULL) printf("ptr is NULL\r\n");
    else printf("ptr is not NULL\r\n");
    printf("ptr = &my_integer : 0x%p\r\n", int_ptr);

    return 0;
}

/*
Output
NULL ptr : 0x00000000
ptr = &my_integer : 0x0133F9A0
*/