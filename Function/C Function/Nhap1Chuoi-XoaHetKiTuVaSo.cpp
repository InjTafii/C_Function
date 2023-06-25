#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

// Nhap vao mot chuoi, xoa het cac ki tu và so

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char str[100];
	scanf("%[^\n]", str); // Nhap vao chuoi
	int i,j;
	bool all_al = false;
	while(all_al == false) // Dieu kien lap
	{
		all_al = true;
		for(i = 0; i < strlen(str);i++)
		{
			if(!isalpha(str[i])) // Kiem tra phan tu co phai la chu cai hay khong
			{
				for(j = i; j < strlen(str) ; j++)	// Xoa phan tu khong phai chu cai
				{
					str[j] = str[ j + 1];
				}	
			}	
		}
		for( i = 0; i < strlen(str);i++)	// Kiem tra trong chuoi co ki tu nao khong phai chu cai
		{
			if(!isalpha(str[i]))
				all_al = false;
		}
	}
	
  
  
  
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%s\n", str); // In ra chuoi sau khi xoa
	



  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
