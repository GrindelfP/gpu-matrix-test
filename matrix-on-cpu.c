#include <stdio.h>
#include <unistd.h>

/**
    * @brief Function to multiply two matrices. It takes matrices A and B
    and stores the result in matrix C. Each element of the resultant matrix
    is the sum of the products of the elements of the corresponding row of
    matrix A and the corresponding column of matrix B.
    * @param A First matrix
    * @param B Second matrix
    * @param C Resultant matrix
    * @param n Size of the matrices
    * @param m Size of the matrices
    * @param p Size of the matrices
 */
void multiplyMatrix(double** A, double** B, double** C, int n, int m, int p) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
