#include <stdio.h>

#define ARR_SZ  ((int)5)

int main(void){
    int array[ARR_SZ];
    int array_2d[ARR_SZ][ARR_SZ];

    // Fill array
    for (int i=0; i<ARR_SZ; i++) array[i] = i;

    // Fill array_2d
    for (int i=0; i<ARR_SZ; i++){
        for (int j=0; j<ARR_SZ; j++){
            array_2d[i][j] = (ARR_SZ * i) + j;
        }
    }

    printf("'array' content : \n\r");
    for (int i=0; i<ARR_SZ; i++) printf("0x%p\t", &(array[i]));
    printf("\r\n");
    for (int i=0; i<ARR_SZ; i++) printf("[%d] : %d\t\t", i, array[i]);
    printf("\r\n");

    printf("'array_2d' content :\r\n");
    for (int i=0; i<ARR_SZ; i++){
        for (int j=0; j<ARR_SZ; j++)
            printf("0x%p\t", &(array_2d[i][j]));
        printf("\r\n");
        for (int j=0; j<ARR_SZ; j++)
            printf("[%d][%d] : %d\t", i, j, array_2d[i][j]);
        printf("\r\n");
    }

    return 0;
}

/*
    size_t arr_b_sz = sizeof(array);
    size_t arr_i_sz = sizeof(array) / sizeof(int);

    printf("Size of arr : %d bytes\r\n", arr_b_sz);
    printf("Number of entries : %d entries\r\n", arr_i_sz);
*/

/*
Output
'array' content :
0x0061FEEC	0x0061FEF0	0x0061FEF4	0x0061FEF8	0x0061FEFC
[0] : 0		[1] : 1		[2] : 2		[3] : 3		[4] : 4
'array_2d' content :
0x0061FE88	0x0061FE8C	0x0061FE90	0x0061FE94	0x0061FE98
[0][0] : 0	[0][1] : 1	[0][2] : 2	[0][3] : 3	[0][4] : 4
0x0061FE9C	0x0061FEA0	0x0061FEA4	0x0061FEA8	0x0061FEAC
[1][0] : 5	[1][1] : 6	[1][2] : 7	[1][3] : 8	[1][4] : 9
0x0061FEB0	0x0061FEB4	0x0061FEB8	0x0061FEBC	0x0061FEC0
[2][0] : 10	[2][1] : 11	[2][2] : 12	[2][3] : 13	[2][4] : 14
0x0061FEC4	0x0061FEC8	0x0061FECC	0x0061FED0	0x0061FED4
[3][0] : 15	[3][1] : 16	[3][2] : 17	[3][3] : 18	[3][4] : 19
0x0061FED8	0x0061FEDC	0x0061FEE0	0x0061FEE4	0x0061FEE8
[4][0] : 20	[4][1] : 21	[4][2] : 22	[4][3] : 23	[4][4] : 24
*/