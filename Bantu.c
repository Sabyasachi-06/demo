#include <stdio.h>
int main() {
    int a[2][2][2], i, j, k;
    printf("Enter 8 elements:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            for (k = 0; k < 2; k++) scanf("%d", &a[i][j][k]);
    printf("3D Array:\n");
    for (i = 0; i < 2; i++) {
        printf("Layer %d:\n", i);
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) printf("%d ", a[i][j][k]);
            printf("\n");
        }
    }
    return 0;
}