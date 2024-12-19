#include <stdio.h>

int main() {
    
    int mang[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); 

    printf("Cac phan tu trong mang tu cuoi ve dau:\n");
    for (int i = kichThuoc - 1; i >= 0; i--) {
        printf("%d\n", mang[i]);
    }

    return 0;
}
