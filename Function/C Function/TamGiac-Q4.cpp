#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Ve tam giac nhu mau

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n;
  	scanf("%d", &n);
  	
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	int i,j;


  	for(i = 0; i < 2*n - 1;i++) // Dieu kien
  	{
  		for(j = 0; j < n;j++) // Dieu kien
		{
			if(i >= n -1 - j && i <= n -1 +j) // Dieu kien
				printf("*");
			else 
				printf(" ");
		}	
		printf("\n");
	}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
