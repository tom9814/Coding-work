#include <stdio.h>
void Mystrcpy(char *str1, char *str2)
{	
	int j = 0;
	while(str1[j] != '\0')
	{
		j++;
	}
	int i = 0;
	while(str2[i] != '\0')
	{
		str1[j] = str2[i];
		j++;
		i++;
	}
	str1[j] = '\0';
}

int main()
{
	char str1[] = "Fuck";
	char str2[] = "You";
	Mystrcpy(str1, str2);
	printf("%s", str1);
	return 0; 
}
