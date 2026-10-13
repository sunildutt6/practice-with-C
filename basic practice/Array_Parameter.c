#include<stdio.h>
#include <stdlib.h>

void fun(int *A, int n) {  // A[] or *A will treated as array
    int i;
    A[3]= 15;
    for (i = 0; i < n; i++) {
        printf("%d\n", A[i]);
    }
    printf("*******************\n");
}

int * fun1(int size) {
    int *p;
    p=(int *) malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
        p[i]=i+1;
    return(p);
}


int main () {
    int A[6] = {1, 2};
    fun (A, 6);


    int *ptr, sz= 15;
    ptr = fun1(sz);
    for (int i = 0; i < sz; i++)
        printf("%d\n", ptr[i]);
    return 0;


}