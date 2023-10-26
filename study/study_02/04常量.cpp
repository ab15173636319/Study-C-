#include <iostream>
using namespace std;

/*
常量定义方法
1，#defind 宏常量
2，const修饰的常量
*/

//宏常量——不能以封号；结尾，宏常量在运行是已经包含了封号
#define day 7
int main4()
{
	cout << "每周有" << day << "天" << endl;

//const修饰的变量

	const int month = 12;
//	month = 24;  错误，const修饰的变量也成为常量，不能够被修改
	cout << "一年有" << month << "个月" << endl;

	system("pause");

	return 0;
}