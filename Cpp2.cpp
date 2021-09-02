#include <stdio.h>
#include <string.h>
int main()
{
	int input = 0;
	printf("景治瑞是个好人\n");
	printf("你认同吗？(是/否)>:");
	scanf("%d",&input);
	if(input == 1)
		printf("你很有眼光!\n");
	else
		printf("回答错误\n");
	return 0;
}
