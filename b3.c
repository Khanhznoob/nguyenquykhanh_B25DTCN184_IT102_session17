#include <stdio.h>
#include <string.h>

int main () {
	
	char str01[100], str02[100];
	printf ("Nhap vao moi chuoi ky tu thu nhat: ");
	fgets (str01, sizeof(str01), stdin);
	str01[strcspn(str01, "\n")] = 0;
	printf ("Nhap vao moi chuoi ky tu thu hai: ");
	fgets (str02, sizeof(str02), stdin);
	strcat (str01, str02);
	printf ("%s",str01);
	
	return 0;
}
