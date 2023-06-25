#include<stdio.h>
#include<math.h>

int main(){
	int i,n;
	printf("Enter n=");
	scanf("%d",&n);
	int flag=0;
	if(n>0){
		
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				flag=1;
			}
		}
		if(flag == 0){
				printf("\nPrime");
		}else{
				printf("\nNot Prime");
		}
	}
}
