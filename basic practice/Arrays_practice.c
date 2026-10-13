#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // int A[10];
    // int B[5]={2,4,6,8,10};
    // int C[5] ={2,4,5};
    // int d[15]={0};
    // int e[] ={1,2,3,45,64,54,70,72};
    //
    // int i;
    //
    //
    // int *p;
    // p = (int *)malloc(10*sizeof(int));
    // p[0]=3,p[1]=4,p[2]=5,p[3]=6,p[4]=7;p[5]=8,p[6]=9;
    // for (i=0;i<2;i++) {
    //     printf("A ===> %d\t ", &A[i]);
    // }
    // for (i=0;i<5;i++) {
    //     printf("B ===>%d\t ", &B[i]);
    // }
    // for (i=0;i<10;i++) {
    //     printf("%d ", &p[i]);
    // }

    int *p, *q , i;
    p = (int *)malloc(6 * sizeof(int));
    p[0]=2;p[1]=3;p[2]=4;p[3]=5;p[4]=6;p[5]=7;

    q = (int *)malloc(12 * sizeof(int));

    for (int i = 0; i< 6;i++) {
        q[i]=p[i];
    }


    for (int i = 0; i<6 ;i++) {
        printf("q[%d] = %d\n", i, q[i]);
    }


    return 0;
}
