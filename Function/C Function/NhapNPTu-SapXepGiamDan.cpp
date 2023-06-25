#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Nhap vao n phan tu, sap xep va in ra theo thu tu giam dan

void selectionSort(int arr[], int n) // Ham sap xep giam dan
{
	int i,j,temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	int arr[100];
	scanf("%d", &n); // Nhap vao n
	int i;
	for(i = 0; i < n;i++)
	{
		scanf("%d", &arr[i]); // Nhap vao n phan tu
	}
	selectionSort(arr, n); // Sap xep giam dan

  
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i = 0; i < n;i++)
	{
		printf("%d ", arr[i]);	// In sau khi sap xep
	}


  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
