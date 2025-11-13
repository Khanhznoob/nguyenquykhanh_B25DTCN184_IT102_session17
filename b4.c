#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int i, j;

    printf("Nhap mot chuoi bat ky: ");
	fgets(str, sizeof(str), stdin);
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, str);
    return 0;
}
