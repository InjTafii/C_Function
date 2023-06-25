#include <stdio.h>
#include<string.h>
#include<conio.h>

char * replacefirst (char* source, char* subStr, char* repStr)
{	int count=0;
	int subL= strlen (subStr);
	int repL = strlen(repStr);
	char temp[100];
	char*ptr=strstr(source,subStr);
	int i;
	while(ptr!=NULL){
		strcpy(ptr,ptr+subL);
		if(repL>0){
			strcpy(temp,ptr);
			strcpy(ptr+repL,temp);
			for(i=0;i<repL;i++)*(ptr+i)=repStr[i];
			count++;
			if(count>0){
				break;
			}
		}
		ptr=strstr(source,subStr);
	}
	return source;
}

int main(){
	char S[80];
	char subStr[21];
	char repStr[21];
	gets(S);
	gets(subStr);
	gets(repStr);
	replacefirst(S, subStr, repStr);
	puts(S);
	getchar();
	getchar();
	return 0;
}
