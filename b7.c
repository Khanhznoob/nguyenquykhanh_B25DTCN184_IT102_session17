#include <stdio.h>
#include <string.h> 

int main() {
    char A[100];
    printf("Nhap vao chuoi A: ");
    fgets(A, sizeof(A), stdin);
    char B[100];
    printf("Nhap vao chuoi B: ");
    fgets(B, sizeof(B), stdin);
    A[strcspn(A, "\n")] = 0;
    B[strcspn(B, "\n")] = 0;
    if (strstr(A, B) != NULL) {
        printf("B la con cua A");
    } else {
        printf("B khong la con cua A");
    }
    return 0;
}
