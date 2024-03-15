// 导入数据库 
#include <iostream>

// 使用std命名空间 
using namespace std;

//定义全局变量，用于计时器 
int count = 0;

// 主函数，程序入口 
int main()
{
	// while(bool值(若为真则继续，若为假则退出)) 
	while (true)
	{
		//计时器自增1，也可写成count++; 
		count += 1;
		cout << "第" << count << "次循环...." << endl;
	} 
	system("pause");
	
	return 0;
}

