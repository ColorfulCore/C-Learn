#include <iostream>
#include <time.h>// time.h是以时间为种子要包含的文件 
#include <stdlib.h>// stdlib.h是生成随机数要包含的文件 

// 使用std命名空间 
using namespace std;

int a, b, c;

// 主函数，程序入口 
int main()
{
	//初始化随机数种子
	srand((unsigned)time(NULL));
	
	// 用户确定随机数范围
	cout << "请输入随机数最大值:"; 
	cin >> a; 
	cout << "请输入随机数最小值:"; 
	cin >> b; 
	
	// 用户确定生成随机数个数
	cout << "生成随机数个数:";
	cin >> c; 
	
	// 生成随机数 
	for (int i = 0; i < c; i++) 
	{
		int randint = rand() %a + b;
		cout << randint << endl;	
	}
	
	system("pause");
	
	// 主函数返回值 
	return 0;
}

