#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//printf("%d", 100);
//printf("%c", 'a');
//printf("%s", "abc");
//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "'");
//	printf("c:\\test\\test.c");//\t是水平制表符，就是键盘的Tab键
//	
//	printf("%c\n", '\130');//8进制的130是十进制的多少呢，X--ASCII码值是88,8²*1+8¹*3+8º*0=88，\ddd,ddd表示1-3个八进制的数字
//	printf("%d\n", '\101');//A-65-8进制是：101，8²*1+8¹*0+8º*1=65
//	printf("%d\n", '\x30');//48-'0',16¹*3+16º*0=48,\xdd,dd表示2个十六进制数字
//	选择语句
//	int input = 0;//输入的值
//	printf("规划");
//	printf("那要好好学习吗(1/0)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	int line = 0;
//	while(line < 30000)
//	{
//		printf("写代码：%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}


//函数
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	//函数的方式解决问题
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}

//数组-一组相同类型的元素的集合
//10个整型1-10存起来
//数组是用下标来访问的
int main()
{
	int arr[10] = { 1, 2, 3, 4 , 5, 6, 7, 8, 9, 10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	//char ch[5] = {'a', 'b', 'c'};//不完全初始化，剩余的默认为0
	return 0;
}
