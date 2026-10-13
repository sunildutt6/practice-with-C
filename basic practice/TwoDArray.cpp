#include <cstdlib>
#include <stdio.h>

int main() {
    //first method of creating array
    int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    //second method for creating array
    int *B[3];

    //another method for creating array
    int **C;
    B[0] = (int *)malloc(4*sizeof(int));
    B[1] = (int *)malloc(4*sizeof(int));
    B[2] = (int *)malloc(4*sizeof(int));

    C= (int **)malloc(3*sizeof(int *)); //3 rows
    C[0] = (int *)malloc(4*sizeof(int)); // 4 columns
    C[1] = (int *)malloc(4*sizeof(int));  // 4columns
    C[2] = (int *)malloc(4*sizeof(int));




    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", C[i][j]);

        }
        printf("\n");
    }

    return 0;
}