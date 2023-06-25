#include "conio.h"
#include "stdio.h"
#include "math.h"
#define max 100
//nhap vao mang 1 chieu
void NhapMang(int a[], unsigned int n){
	int i;
   for(i=0; i<n; i++)
   {
      printf("a[%d] = ",i);
      scanf("%d",&a[i]);
   }
}
//xuat mang 1 chieu
void XuatMang(int a[], unsigned int n) {
   printf("\n------- Display Array ------\n");
   int i;
   for( i=0; i<n; i++)
      printf("%d\t",a[i]);
}
//uoc chung lon nhat cua 2 so a va b
unsigned int UCLN(unsigned int a, unsigned int b) {
   if(a==b)
      return a;
   else
      if(a>b)
         return UCLN(a-b,b);
      else
         return UCLN(a,b-a);
}
unsigned int N(int a[], unsigned int n) {
   unsigned int temp;
   int i;
   if(n==1)
      return abs(a[0]);
   else 
   {
      temp = abs(a[0]);
      for( i = 1; i<n; i++)
         temp = UCLN(temp, abs(a[i]));
   }
   return temp;
}
//chuong trinh chinh
int main() {
   int b[max];
   unsigned int m;
   printf("Nhap so phan tu: ");
   scanf("%d",&m);
   NhapMang(b,m);
   XuatMang(b,m);
   printf("UCLN mang %d",N(b,m));
   getch();
}
