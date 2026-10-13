#include <stdio.h>
#include <stdlib.h>

int global_var = 10;   // Data segment

void test() {
    int local_var = 20;              // Stack
    float *heap_var = malloc(sizeof(float)); // pointer stack par, memory heap par


    *heap_var = 30;

    printf("Address of local_var (STACK)     : %p\n", (void*)&local_var);
    printf("Address of heap_var pointer       : %p\n", (void*)&heap_var);
    printf("Address allocated by malloc (HEAP): %p\n", (void*)heap_var);
    printf("Address of global_var             : %p\n", (void*)&global_var);
    printf("Size of global_var              : %llu\n", sizeof(heap_var));




    free(heap_var);
}

int main() {
    test();
    return 0;
}