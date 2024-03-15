#include <iostream>

using namespace std;

// 定义变量 
int num1 = 1;
int num2 = 2;

// 声明函数 void为数据类型，意为无返回值，若要有返回值应使用对应数据而类型，例如：int char..... 
void function1();
int function2(int a);

// 主函数，程序入口 
int main()
{
	cout << "--------------------加工前--------------------" << endl; 
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	
	// 使用函数 
	function1();
	
	cout << "--------------------加工后--------------------" << endl; 
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	
	// 使用函数 
	cout << "--------------------num1加工后--------------------" << endl; 
	cout << "num1加10后：" << function2(num1) << endl; 
	cout << "变量未改变！" << endl; 
	cout << "num1 : " << num1 << endl;
	cout << "--------------------num2加工后--------------------" << endl; 
	num2 = function2(num2);
	cout << "num2加10后：" << num2 << endl;
	cout << "变量已改变！" << endl;
	cout << "num2 : " << num2 << endl;
	return 0;
}

// 补充函数内容 
void function1()
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

int function2(int a)
{
	// a自增10，也可写成a = a + 10; 
	a += 10;
	// 返回值，返回加工后的变量值 
	return a;
}

