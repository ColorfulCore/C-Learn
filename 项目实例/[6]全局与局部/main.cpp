// 导入数据库 
#include <iostream>

// 使用std命名空间 
using namespace std;

// 声明函数 
void function(); 

// 定义全局变量
int a = 1; 

// 主函数，程序入口 
int main()
{
	cout << "a : " << a << endl;
	
	system("pause");
	
	// 主函数返回值 
	return 0;
}

// 添加函数内容
void function()
{
	// 定义局部变量 
	int a = 2;	
} 
