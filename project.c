#include <stdio.h>
int main() {
    int choice;
    do {
        printf("MATRIX CALCULATOR\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        int m, n, p, q;
        switch (choice) {
        case 1: {     
            printf("\nEnter rows and columns of matrices: ");
            scanf("%d %d", &m, &n);
            int A[m][n], B[m][n], C[m][n];
            printf("Enter Matrix A:\n");
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    scanf("%d", &A[i][j]);
            printf("Enter Matrix B:\n");
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    scanf("%d", &B[i][j]);
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    C[i][j] = A[i][j] + B[i][j];
            printf("\nResult (A + B):\n");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++)
                    printf("%d ", C[i][j]);
                printf("\n");
            }
            break;
        } 
        case 2: {     
            printf("\nEnter rows and columns of matrices: ");
            scanf("%d %d", &m, &n);
            int A[m][n], B[m][n], C[m][n];
            printf("Enter Matrix A:\n");
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    scanf("%d", &A[i][j]);
            printf("Enter Matrix B:\n");
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    scanf("%d", &B[i][j]);
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    C[i][j] = A[i][j] - B[i][j];
            printf("\nResult (A - B):\n");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++)
                    printf("%d ", C[i][j]);
                printf("\n");
            }
            break;
        }
        case 3: {     
            printf("\nEnter rows and columns of Matrix A: ");
            scanf("%d %d", &m, &n);
            printf("Enter rows and columns of Matrix B: ");
            scanf("%d %d", &p, &q);
            if (n != p) {
                printf("\nMultiplication NOT possible (Columns of A != Rows of B)\n");
                break;
            }
            int A[m][n], B[p][q], C[m][q];
            printf("Enter Matrix A:\n");
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    scanf("%d", &A[i][j]);
            printf("Enter Matrix B:\n");
            for (int i = 0; i < p; i++)
                for (int j = 0; j < q; j++)
                    scanf("%d", &B[i][j]);
            for (int i = 0; i < m; i++)
                for (int j = 0; j < q; j++) {
                    C[i][j] = 0;
                    for (int k = 0; k < n; k++)
                        C[i][j] += A[i][k] * B[k][j];
                }
            printf("\nResult (A × B):\n");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < q; j++)
                    printf("%d ", C[i][j]);
                printf("\n");
            }
            break;
        }
        case 4:
            printf("\nExiting program...\n");
            break;
        default:
            printf("\nInvalid choice! Try again.\n");
        }
    } while (choice != 4);
    return 0;
} 
