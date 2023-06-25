#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//Tinh tong = 1/x + 1/x^2 + 1/x^3 +... + 1/x^n , x va n nhap tu ban phim


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int x,n;
	scanf("%d%d", &x, &n); // Nhap x,n
	double sum = 0; // Gia tri tong
	int i;
	for(i = 0;i <= n;i++)
	{
		sum+= 1 / (pow(x,i));	// Tinh 
	}
  

	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%.2lf\n", sum); // In ra ket qua

  
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
