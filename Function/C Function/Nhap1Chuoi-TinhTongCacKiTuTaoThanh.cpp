#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Your program should allow users to enter an integer number 'n', then it should display the sum of all the digits forming 'n'.
// Nhap chuoi - Tinh Tong Cac chu so tao thanh n
int main() {
	system("cls");
	char c[100];
	int tong = 0, i, len;
	gets(c);
	len = strlen(c);
	for (i = 0; i < len; i++)
	{
		tong += ((int) c[i] - 48);
	}
	printf("\nOUTPUT:\n");
	printf("%d", tong);
	printf("\n");
	system("pause");
	return(0);
}

