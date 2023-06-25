#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Nhap vao 6 so nguyen, in ra tong cua cac so chan

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int arr[6],i;
	for(i = 0; i < 6;i++)
	{
		scanf("%d", &arr[i]); // Nhap vao 6 so nguyen
	}
	
	int sum = 0; // Gia tri luu tong cac so nguyen
	
	for(i = 0; i < 6;i++)
	{
		if(arr[i] % 2 == 0) // Kiem tra so chan
		{
			sum += arr[i]; 
		}
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
