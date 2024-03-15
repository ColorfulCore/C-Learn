// 导入数据库 
#include <iostream>

// 使用std命名空间 
using namespace std;

// ----------------变量(可以被改变的数据容器)------------------ 
// 整型 
int a = 1;
// 单精度浮点型
float b = 3.14;
// 双精度浮点型
double c = 3.14;
// 字符型
char d = 'd';

// ----------------常量(不可被改变的数据容器)------------------ 
// 整型 
const int A = 1;
// 单精度浮点型
const float B = 3.14;
// 双精度浮点型
const double C = 3.14;
// 字符型
const char D = 'd';

// 主函数，程序入口
int main()
{
	// 输出变量数值
	cout << "---------------输出变量数值---------------" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << "d : " << d << endl << endl;
	
	// 改变变量数值
	a = 2;
	b = 1.14;
	c = 1.14;
	d = 'D';
	cout << "改变变量数值" << endl << endl; 
	
	// 再次输出变量数值
	cout << "---------------再次输出变量数值---------------" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << "d : " << d << endl;
	
	cout << "--------------------------------------------------------------------------" << endl << endl;
	
	// 输出常量数值
	cout << "---------------输出常量数值---------------" << endl;
	cout << "A : " << A << endl;
	cout << "B : " << B << endl;
	cout << "C : " << C << endl;
	cout << "D : " << D << endl << endl;
	
	// 改变常数值
	a = 2;
	b = 1.14;
	c = 1.14;
	d = 'D';
	cout << "改变常量数值" << endl << endl; 
	
	// 再次输出常量数值
	cout << "---------------再次输出常量数值---------------" << endl;
	cout << "A : " << A << endl;
	cout << "B : " << B << endl;
	cout << "C : " << C << endl;
	cout << "D : " << D << endl;
	
	cout << "至此，证明：变量可变，而常量不可变" << endl; 
	system("pause");
	
	return 0;
}

