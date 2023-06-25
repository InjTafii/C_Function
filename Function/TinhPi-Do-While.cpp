#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	float pi,epsilon,a;
	int n;
	do {printf("Nhap vao so duong epsilon < 1 :");
	    scanf("%f",&epsilon);}
	while(epsilon<=0||epsilon>=1);
	pi=0;
	n=-1;
	do {n++;
	    a=4.0/(2*n+1);
	    pi=pi+a*pow(-1,n);
	}while(a/4>=epsilon);
	printf("\n So pi = %f .",pi);
	getch();
}
