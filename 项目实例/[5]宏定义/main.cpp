// 导入数据库 
#include <iostream>

// 使用std命名空间 
using namespace std;

//--------------------宏定义---------------------
//用字符代替字符，有时可以当常量用
#define A 99

//也可制作类似于函数的数据工厂
#define B(a) a + 100

int sb = 1;

// 主函数，程序入口 
int main()
{
	cout << "A : " << A << endl;
	cout << "B : " << B(sb) << endl;
	
	system("pause");
	
	return 0;
}

