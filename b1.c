#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int i;
    int j = strlen(str) - 1;
    for(i = 0; i < j; i++) {
		if (str[i] != str[j]) {
            return 0;
        }
        j--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    if (isPalindrome(str))
        printf("La palindrome\n");
    else
        printf("Khong phai palindrome\n");

    return 0;
}
