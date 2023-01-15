#include <stdio.h>
int main()
{
	char s[100];
	int i=0 ,vowel=0 ,consonant=0;	
	
	printf("enter a line of strign:");
	scanf("%s",s[100]);
	
	while(s[i]!='\0')
	{
		if(s[i]>96 && s[i]<123)
		{
			if (s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]== 117)
			{
				vowel++;
			}
			else 
				consonant++;
		}
	}
	printf("number of vowels = %d  number of consonants = %d",vowel,consonant);
	return 0;
}
