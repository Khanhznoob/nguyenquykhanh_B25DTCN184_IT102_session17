#include <stdio.h>
#include <string.h>



int main () {
	
	char str[100];
	int choice;
	printf ("Nhap vao moi chuoi ky tu: ");
	fgets (str, sizeof(str), stdin);
	do {
		printf ("+-----------------------MENU-------------------+\n");
		printf ("1. Chuyen toan bo chuoi ky tu thanh chu hoa    |\n");
		printf ("2. Chuyen toan bo chuoi ky tu thanh chu thuong |\n");
		printf ("3. Thoat chuong trinh                          |\n");
		printf ("+----------------------------------------------+\n");
		printf ("Lua chon chuc nang: ");
		scanf ("%d",&choice);
		switch (choice) {
			case 1:
				for (int i = 0; i < strlen(str); i++) {
					if (str[i] >= 'a' && str[i] <= 'z') {
						str[i] = str[i] - 32 ;
					}
				}
				printf ("Chuoi ky tu sau khi chuyen thanh chu hoa la: %s",str);
				break;
			case 2:
				for (int i = 0; i < strlen(str); i++) {
					if (str[i] >= 'A' && str[i] <= 'Z') {
						str[i] = str[i] + 32 ;
					}
				}
				printf ("Chuoi ky tu sau khi chuyen thanh chu thuong la: %s",str);
				break;
		}
	} while (choice != 3);
	
	return 0;
}
