#include <stdio.h>
int main()
{	
	int num;
	printf("输入一个十进制数:");
	scanf("%d",&num);
	//定义一个数组来装填二进制数
	int binnum[100];
	int i = 0; 
	//正数的二进制转换
	if(num > 0)
	{
			while(num >= 1)
		{
			binnum[i] = num % 2;
			i++; 
			num = num / 2;
		}
		for(int j = i - 1;j >= 0; j--)
		{
			printf("%d",binnum[j]);
		}
	}
	//负数的二进制转换 
	if(num < 0)
	{	
		//将num换为正数，并转换为二进制数 
		num = -num;
		while(num >= 1)
		{
			binnum[i] = num % 2;
			i++; 
			num = num / 2;
		}
		//i2的定义放在if外面 
		int i2;
		//只有8位的情况
		if(i <= 8)
		{	
			for(i2 = i; i2 < 8; i2++)
			{
				binnum[i2] = 0; 
			}
		}
		int temp = 0; 
		//从左到右遇到的第一个1不变，其后面0变1,1变0； 
		for(int i3 = 0; i3 <= i2; i3++)
		{	
			//遇到的第一个1
			if(temp == 0 && binnum[i3] == 1)
			{
				temp++;
			}
			//遇到第一个1后其余的数0变1,1变0 
			else if(temp == 1)
			{
				binnum[i3] = !binnum[i3];
			} 
		} 
		for(int i4 = i2; i4 >= 0; i4--)
		{
			printf("%d",binnum[i4]);
		} 
	}
	return 0;
}
