#include <stdio.h>

void multiply_matrices(int r1, int c1, int r2, int c2, int mat1[r1][c1], int mat2[r2][c2], int result[r1][c2]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void input_matrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Resulting matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second matrix.\n");
        return 1;
    }
    
    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];
    
    printf("Enter elements for first matrix:\n");
    input_matrix(r1, c1, mat1);
    
    printf("Enter elements for second matrix:\n");
    input_matrix(r2, c2, mat2);
    
    multiply_matrices(r1, c1, r2, c2, mat1, mat2, result);
    print_matrix(r1, c2, result);
    
    return 0;
}