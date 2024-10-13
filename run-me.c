#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "matrix-on-cpu.h"
#include "test-utils.h"

int main(int atgc, char** argv) {

    int n = 5000, m = 7500, p = 10000;

    srand(time(NULL));

    double** A = createMatrix(n, m);
    double** B = createMatrix(m, p);
    double** C = createMatrix(n, p);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = (double)(rand() % 100);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            B[i][j] = (double)(rand() % 100);
        }
    }

    clock_t start = clock();
    multiplyMatrix(A, B, C, n, m, p);
    clock_t end = clock();

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    // printf("Matrix A:\n");
    // printMatrix(A, n, m);

    // printf("Matrix B:\n");
    // printMatrix(B, m, p);


    // printf("Matrix C (Result of A * B):\n");

    // printMatrix(C, n, p);
    
    printf("Matrix multiplication took %f seconds to execute.\n", time_taken);

    deleteMatrix(A, n);
    deleteMatrix(B, m);
    deleteMatrix(C, n);

    return 0;
}
