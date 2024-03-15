#include <iostream>

using namespace std;

int main()
{
	// 模板 ：for(定义并初始化变量;执行循环的条件;自增或自减变量) 
	for (int count = 0;;count++)
	{
		cout << "第" << count << "次循环...." << endl;
	}
	system("pause");
	
	return 0;
}

