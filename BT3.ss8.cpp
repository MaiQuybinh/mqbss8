#include <stdio.h>

int main() {
    int n;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So nguyen phai lon hon 0!\n");
        return 1; 
    }

    int mang[n][n];
    int dem = 1; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mang[i][j] = dem++;
        }
    }

    printf("Ma tran vuong %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", mang[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
