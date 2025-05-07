#include<stdio.h>
int main()
{
	////sizeof是一个操作符，不是函数，用来计算类型或者变量的大小
	//int a = 10;
	//printf("%d\n", sizeof(int));//sizeof旁边如果实变量括号就可以省略，如果是类型就不行。
	//printf("%d\n", sizeof a);

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//10*4=40,计算的是数组的大小，单位是字节
	//printf("%d\n", sizeof(arr[0]));// 4
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//printf("%d\n", sz);


	////条件操作符exp1?  exp2: exp3，
	//int a = 0;
	//int b = 3;
	//int max = 0;
	///*if (a > b)
	//	max = a;
	//else
	//	max = b;*///这个选择语句可以代替下面这个语句
	//max = a > b ? a : b;
	//printf("%d\n", max);


	////逻辑与和逻辑或
	//int a = 1;
	//int b = 4;
	//int c = a || b;
	//printf("%d\n", c);

	////逗号表达式是：逗号隔开的一串表达式
	////(2, 4 + 5, 6);
	//int a = 0;
	//int b = 3;
	//int c = 5;
	//int d = (a = b + 2, c = a - 4, b = c + 2);//a=5,c=1,b=3
	////逗号表达式， 是从左向右依次计算的
	////整个表达式的结果是最后一个表达式的结果
	//printf("%d\n", d);

	////下标引用操作符
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//printf("%d\n", arr[5]);

	////函数调用操作符，调用函数的时候，函数名后边的（）就是函数调用操作符
	//printf("hehe\n");

	////~对一个数的二进制按位取反
	//int a = 0;
	//printf("%d\n", ~a);

	////前置++，后置++
	//int a = 10;
	////int b = ++a;//前置++，先加加，后使用
	//int b = a++;//后置++， 先使用，后加加
	//printf("%d %d\n", b, a);

	//（类型）强制类型转换
	int a = (int)3.14;
	printf("%d", a);
	return 0;
}