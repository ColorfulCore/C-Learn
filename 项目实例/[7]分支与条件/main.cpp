#include <iostream>
#include <string>

using namespace std;

// 定义字符串变量 
string pin;

int main()
{
	cout << "你看我帅不？" << endl;
	cout << "请输入(Y/N):"; 
	 
	// cin让用户输入数据 
	cin >> pin;
	
	// 开始判断 
	if (pin == "Y")
	{
		cout << "谢谢" << endl;
	}
	else if (pin == "N")
	{
		cout << "你真没眼光" << endl; 
	}
	else
	{
		cout << "你输入的是无效数值!" << endl;
	}
	system("pause");
	
	return 0;
}

