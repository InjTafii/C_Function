#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Nhap 1 chuoi va tra ve so chu cai, chu so, va ki tu dac biet xuat hien trong chuoi
/*
 int isalnum(int c)	
H�m n�y kiem tra xem k� tu d� truyen c� phai l� chu-so kh�ng

H�m int isalpha(int c)	
H�m n�y kiem tra xem k� tu d� truyen c� phai l� chu c�i kh�ng

H�m int iscntrl(int c)	
H�m n�y kiem tra xem k� tu d� truyen c� phai l� k� te dieu khien kh�ng

H�m int isdigit(int c)	
H�m n�y kiem tra xem k� tu d� truyen c� phai l� chu so thap ph�n kh�ng

H�m int isgraph(int c)	
H�m n�y kiem tra xem k� tu d� truyen c� phai l� k� tu graphical voi Locale d� cho kh�ng

H�m int islower(int c)	
H�m n�y kiem tra xem k� tu d� truyen c� phai l� mot chu thuong kh�ng

H�m int isprint(int c)	
H�m n�y kiem tra xem k� tu d� truyen c� the in duoc kh�ng

H�m int ispunct(int c)	
H�m n�y kiem tra xem k� tu d� truyen c� phai l� mot punctuation char kh�ng

H�m int isspace(int c)	
H�m n�y kiem tra xem k� tu d� truyen c� phai l� white-space

H�m int isupper(int c)	
H�m n�y kiem tra xem k� tu d� truyen c� phai l� mot chu hoa kh�ng

H�m int isxdigit(int c)	
H�m n�y kiem tra xem k� tu d� truyen c� phai l� k� tu thap luc ph�n kh�ng
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
