#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Nhap vao n phan tu. Tim so phan tu duoc lap trong mang

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	int arr[1000], b[1000] = {0}, c[1000] = {0};
	int i;
	scanf("%d", &n); // Nhap n
	for(i = 0; i < n;i++)
  	{
  		scanf("%d", &arr[i]); // Nhap n phan tu
	}
	for(i = 0; i < n;i++)
	{
		if(arr[i] > 0)
			b[arr[i]]++; //Tra ve so cac phan tu lon hon 0 
		if(arr[i] < 0)
			c[-arr[i]]++; //Tra ve so phan tu nho hon 0 
	}
	int sum  = 0;
	//Vong lap tra ve so cac phan tu duoc lap trong mang
	for(i = 0; i < 1000;i++)
	{
		if(b[i] > 1)
			sum++;
		if(c[i] > 1)
			sum++;
	}
	// Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	printf("%d", sum); // In ra ket qua







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
