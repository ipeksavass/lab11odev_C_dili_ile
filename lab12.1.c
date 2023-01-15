#include <stdio.h>

int main()
{
	char s1[100];
	char s2[100];
	printf("lutfen birinzi dizi icin bir isim giriniz:");
	scanf("%s",s1);

	printf("lutfen ikinci dizi icin bir isim giriniz:");
	scanf("%s",s2);

	printf("%s %s",s1,s2);
	return 0;
}
