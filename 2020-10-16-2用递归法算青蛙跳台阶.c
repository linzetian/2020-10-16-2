//青蛙跳台阶本质类似斐波那契数问题
//青蛙跳台阶（1次可以跳一个台阶，1次也可以跳2个台阶，这只青蛙要跳到第n个台阶，有多少种跳法）
//1 2 3 5 8 13 21 34
//当n（n表示台阶）很大的时候用递归效率较低，可以用迭代

//用递归法算青蛙跳台阶
#include<stdio.h>
int jump(int m)
{
	if (m == 1 )
	{
		return 1;
	}
	else if (m == 2)
	{
		return 2;
	}
	else
	{
		return jump(m - 1) + jump(m - 2);
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入台阶数：");
	scanf("%d",&n);
	ret=jump(n);
	printf("总共有%d种跳法\n",ret);
	return 0;
}