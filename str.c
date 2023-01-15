#include <stdio.h>
#define size 50
int main(){
	char s1[size], s2[size], s3[size] ,s4[size];
	char main[size];
	int m, x, a, b, c, d;
	printf("Please enter a line of string: ");
	gets(main);
	
	for(m=0;main[m]!=NULL;m++);
	for(x=0,a=0,b=0,c=0,d=0;x<m;x++){
		if(main[x]==97||main[x]==101||main[x]==105||main[x]==111||main[x]==117||main[x]==65||main[x]==69||main[x]==73||main[x]==79||main[x]==79){
			a++;
		}  
		else if(main[x]>=65&&main[x]<=90 || main[x]>=97 && main[x]<=122){
			b++;
		}
		if(main[x]>=48 || main[x]<=57){
			c++;
		}
		if(main[x]==32){
			d++;
		}
	}
	printf("number of vowels= %d\nnumber of consonants= %d\nnumber of digits= %d\nnumber of white space= %d\n",a,b,c,d);
	return 0;
		
}
