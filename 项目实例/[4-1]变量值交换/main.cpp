#include <iostream>

using namespace std;

// 定义全局变量 
int a = 1;
int b = 2;
int temp; 

int main()
{
	cout << "--------------------交换前--------------------" << endl; 
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	
	// 交换原理 
	temp = a;
	a = b;
	b = temp;
	
	cout << "--------------------交换后--------------------" << endl; 
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	system("pause");
	
	return 0;
}

