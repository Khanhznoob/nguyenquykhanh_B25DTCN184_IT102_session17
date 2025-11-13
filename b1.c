#include <stdio.h>
#include <string.h>

int main (){
	char str[100];
	printf("Nhap ten cua ban: ");
	fgets(str, sizeof(str), stdin);
	printf("Ten cua ban la: %s", str);
	
	
	
	int length = strlen(str);
	printf("Do dai chuoi: %d", length);
	
	
	return 0;
}
