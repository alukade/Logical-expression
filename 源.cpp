#include<stdio.h>
int main()
{
	int a = 5, b = 3;

	printf("%d\n", 3 > 1 && 1 < 2);//&&逻辑与运算
	printf("%d\n", 3 + -3 || 2 == 0);//输入时，只要不输入0，其他任何都是1，如3+1=4≠0，因此为真，bool=1
	                                //||逻辑或运算
	printf("%d\n", !(a + b));//a+b=8，因此bool运算为1，非1故为0
	printf("%d\n", !0 + 1 < 1 || !(3 + 4));//左右bool运算都为0
	printf("%d\n", 'a' - 'b' && 'c');//左右bool运算都为0

	return 0;
}
