#include <stdio.h>
#include <stdlib.h>

/**
    * Print a matrix to the console.
    * @param matrix Matrix to be printed
    * @param rows Number of rows in the matrix
    * @param cols Number of columns in the matrix
 */
void printMatrix(double** matrix, int rows, int cols);

/**
    * Create a matrix with the specified number of rows and columns.
    * @param rows Number of rows in the matrix
    * @param cols Number of columns in the matrix
    * @return Pointer to the matrix
 */
double** createMatrix(int rows, int cols);

/**
    * Delete a matrix from memory.
    * @param matrix Matrix to be deleted
    * @param rows Number of rows in the matrix
 */
void deleteMatrix(double** matrix, int rows);
