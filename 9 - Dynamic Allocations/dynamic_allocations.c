#include <stdlib.h>

int main(void) {
    // Allocate memory
    void * ptr = malloc(4);
 
    // If returned pointer is unusable, return error
    if (ptr == NULL) return -1;

    // Proper interger allocation
    int * int_ptr = (int *) malloc(sizeof(int));

    // If returned pointer is unusable, return error
    if (int_ptr == NULL) return -1;

    // Deallocate memory
    free(ptr);
    ptr = NULL;

    if (ptr != NULL) {
        // Use pointer
    }

    // Deallocate memory
    free(int_ptr);
    int_ptr = NULL;

    if (int_ptr != NULL) {
        // Use pointer
    }

    return 0;
}