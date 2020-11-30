#include <stdio.h>
#include <string.h>
int main()
{
	
	printf("加入比特");
	int line = 0;
	while (line <= 20000)
	{
		line++;
		printf("敲一行代码：%d\n",line);
	}
	if (line > 20000)
		printf("好offer");
	
	return 0;
}
