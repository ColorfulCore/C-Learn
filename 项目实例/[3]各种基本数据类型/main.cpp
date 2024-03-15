// 导入数据库 
#include <iostream>

// 使用std命名空间 
using namespace std;

// ----------------基本数据类型------------------ 
// 整型, 存储整数 
int a = 1;
// 单精度浮点型， 存储精度偏小的小数 
float b = 3.1415926;
// 双精度浮点型，存储精度偏大的小数  
double c = 3.1415926;
// 字符型，存储一个字节的字符 
char d = 'd';
// bool值，真与假, 1与0 
bool e = true; 
bool f = false;
// 无类型，用于函数，表示没有返回值
void function(); 

// 主函数，程序入口
int main()
{
	// 输出数据类型 
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << "d : " << d << endl;
	cout << "e : " << e << endl;
	cout << "f : " << f << endl;
	 
	system("pause");
	
	return 0;
}

