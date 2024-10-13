#include <stdio.h>
#include <stdlib.h>

/**
    * Print a matrix to the console.
    * @param matrix Matrix to be printed
    * @param rows Number of rows in the matrix
    * @param cols Number of columns in the matrix
 */
void printMatrix(double** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

/**
    * Create a matrix with the specified number of rows and columns.
    * @param rows Number of rows in the matrix
    * @param cols Number of columns in the matrix
    * @return Pointer to the matrix
 */
double** createMatrix(int rows, int cols) {
    double** matrix = (double**)malloc(rows * sizeof(double*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (double*)malloc(cols * sizeof(double));
    }
    return matrix;
}

/**
    * Delete a matrix from memory.
    * @param matrix Matrix to be deleted
    * @param rows Number of rows in the matrix
 */
void deleteMatrix(double** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}