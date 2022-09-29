#include <stdio.h>

#define ARR_SZ  ((int)20)

void main(void){
    int array[ARR_SZ];
    for (int i=0; i<ARR_SZ; i++) array[i] = i;

    size_t arr_b_sz = sizeof(array);
    size_t arr_i_sz = sizeof(array) / sizeof(int);

    printf("Size of arr : %d bytes\r\n", arr_b_sz);
    printf("Number of entries : %d entries\r\n", arr_i_sz);

    printf("Array content : {");
    for (int i=0; i<arr_i_sz; i++) printf("%d, ", array[i]);
    printf("}\r\n");
}

/*
Output
Size of arr : 80 bytes
Number of entries : 20 entries
Array content : {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, }
*/