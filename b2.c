#include <stdio.h>

int main() {
    char str[100];
    int word = 1; 

    printf("Input: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
           word = 1;
        } 
        else if (word == 1) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
        	}
			word = 0;
        }
    }

    printf("Output: %s", str);
    return 0;
}
