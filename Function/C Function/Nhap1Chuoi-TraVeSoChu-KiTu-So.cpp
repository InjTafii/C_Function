#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Nhap 1 chuoi va tra ve so chu cai, chu so, va ki tu dac biet xuat hien trong chuoi
/*
 int isalnum(int c)	
Hàm này kiem tra xem ký tu dã truyen có phai là chu-so không

Hàm int isalpha(int c)	
Hàm này kiem tra xem ký tu dã truyen có phai là chu cái không

Hàm int iscntrl(int c)	
Hàm này kiem tra xem ký tu dã truyen có phai là ký te dieu khien không

Hàm int isdigit(int c)	
Hàm này kiem tra xem ký tu dã truyen có phai là chu so thap phân không

Hàm int isgraph(int c)	
Hàm này kiem tra xem ký tu dã truyen có phai là ký tu graphical voi Locale dã cho không

Hàm int islower(int c)	
Hàm này kiem tra xem ký tu dã truyen có phai là mot chu thuong không

Hàm int isprint(int c)	
Hàm này kiem tra xem ký tu dã truyen có the in duoc không

Hàm int ispunct(int c)	
Hàm này kiem tra xem ký tu dã truyen có phai là mot punctuation char không

Hàm int isspace(int c)	
Hàm này kiem tra xem ký tu dã truyen có phai là white-space

Hàm int isupper(int c)	
Hàm này kiem tra xem ký tu dã truyen có phai là mot chu hoa không

Hàm int isxdigit(int c)	
Hàm này kiem tra xem ký tu dã truyen có phai là ký tu thap luc phân không
*/
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	char str[100];
  	scanf("%[^\n]", str); //Nhap chuoi
  	int i = 0;
  	int al = 0, digit = 0, special = 0; 
  	
  	for(i = 0; i < strlen(str); i++) 
  	{
  		if(isalpha(str[i]))
			al++;
		else if(isdigit(str[i]))
			digit++;
		else
			special++;	 	
	}
  
  
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d\n%d\n%d", al, digit, special); // In ra theo yeu cau de bai




  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
