#include <stdio.h>
#include <stdlib.h>

#define n 100

int main() {

    int matrix[n][n];
    FILE *output;

    if ((output = fopen ("output.txt", "w")) == NULL)
    {
        printf ("unable to open output file\n");
        exit (1);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = i * n + j + 1;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            fprintf(output, "%4d ", matrix[i][j]);
        }
        fprintf(output, "\n");
    }

    return 0;
}
