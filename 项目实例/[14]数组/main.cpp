// 导入数据库 
#include <iostream>

// 使用std命名空间 
using namespace std;

//定义并初始化数组
int list_int[] = {1, 2, 3, 4};
char list_char[] = {"1234"};

// 主函数，程序入口 
int main()
{
	int max = 4;
	//输出数组
	cout << "整型数组输出：";
	// 数组的第一个元素从0开始索引
	for (int i = 0; i < max; i++)
	{
		// 访问方式: 数组名[序数（0~max）] 
		cout << list_int[i];	
	}
	
	cout << endl << "字符型数组（C风格字符串）输出：";
	
	for (int i = 0; i < max; i++)
	{
		cout << list_char[i];	
	}
	cout << endl;
	
	// 修改访问长度 
	max = 10;
	// 越界输出
	cout << "---------------------尝试越界访问-------------------------" << endl;
	//输出数组
	cout << "整型数组输出：";
	// 数组的第一个元素从0开始索引
	for (int i = 0; i < max; i++)
	{
		cout << list_int[i];	
	}
	
	cout << endl << "字符型数组（C风格字符串）输出：";
	
	for (int i = 0; i < max; i++)
	{
		cout << list_char[i];	
	}
	cout << endl;
	system("pause");
	
	// 主函数返回值 
	return 0;
}

