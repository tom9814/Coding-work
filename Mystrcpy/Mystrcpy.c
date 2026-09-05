#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void changestrp(char **origin, char *tar)
{
	*origin = tar;
}

void mystrcpy(char **str1, char *str2)
{
	int i = 0;
	int j = 0;
	int len = strlen(*str1) + strlen(str2) + 1;
	//为tempstr开辟足够的空间 
	char *tempstr = (char*)malloc(len * sizeof(char));
	//第一个数组除了结尾的\0，其他元素全部放在tempstr里 
	while((*str1)[i] != '\0')
	{
		tempstr[j] = (*str1)[i];
		j++;
		i++;
	}
	//重新初始化i 
	i = 0;
	//第二个数组的元素全部放在tempstr里 
	while(str2[i] != '\0')
	{
		tempstr[j] = str2[i];
		i++;
		j++; 
	}
	tempstr[j] = '\0';
	//调用changestrp函数将tempstr的值赋值给str1
	changestrp(str1, tempstr); 
}

int main()
{
	char *str1 = "Hello";
	char *str2 = "World";
	mystrcpy(&str1, str2);
	free(str1);
	return 0;
}
