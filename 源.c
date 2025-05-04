#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char ch = 0;
//	int ch = getchar(); //假设用户输入字符‘a’并回车，此时ch会被赋值为字符‘a’的ASCII码值为97
//	scanf("%c", &ch);
//	printf("%c\n", ch);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int num = 10;//整型常量
//    char ch = 'a';//字符常量
//    double real1 = 3.14;//实型常量（由数字和小数点组成）real实数类型
//    double real2 = 12.34e3;//实型常量（指数形式，12.34*10³）
//    char str[] = "abcef";//字符串常量
//    printf("num: %d\n", num);
//    printf("ch: %c\n", ch);
//    printf("real1: %1f\n", real1);
//    printf("real2: %1f\n", real2);
//    printf("str: %s\n", str);
//    return 0;
//}

//const int num = 10;//num就是常变量-具有常属性（不能被改变的属性）
//
//int main()
//{
//	int arr[10] = { 0 };//10个元素
//	int n = 10;
//	int arr2[n] = { 0 };//n是变量的，这里是不行的，在int n = 10；前面加const，还是不行，因为没有改变常属性这个性质
//	return 0;
//
//}

//#define MAX 10000//define定义的标识符常量
//int main()
//{
//	//int n = 2000;//错误
//	int n = MAX;
//	printf("n=%d\n", n);
//	return 0;
//}

//字符串就是一串字符，用双引号括起来的一串字符。注意：字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算作字符串内容。
//int main()
//{
//	//字符数组-数组是一组形同类型的元素
//	//字符串在结尾的位置隐藏了一个\n的字符
//	//\0是字符串的结束标志
//	//char arr[] = "hello";
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c'};
//	//打印字符串
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	//求一下字符串的长度
//	int len = strlen("abc");//string length
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	
//
//	return 0;
//}
//枚举常量-可以一一列举的常量
enum Sex
{
	//这种枚举类型的变量未来可能取值
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	enum Sex s = MALE;
	//MALE = 3;//赋初值,是错误的
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}
