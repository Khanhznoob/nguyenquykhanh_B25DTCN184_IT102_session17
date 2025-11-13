#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int max = 0;
    char longest[100] = "";
    int i = 0;
    while (str[i] != '\0') {
        while (str[i] == ' ') i++;
        char word[100] = "";
        int len = 0;
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\t') {
            word[len] = str[i];
            len++;
            i++;
        }
        word[len] = '\0';
        if (len > max) {
            max = len;
            strcpy(longest, word);
        }
    }
    printf("Tu dai nhat: %s\n", longest);
    printf("So ky tu: %d\n", max);
    return 0;
}

