#include <iostream>
#include <string>

using namespace std;

// 定义字符串变量 
int pin;

int main()
{
	cout << "你看我帅不？" << endl;
	cout << "1-->帅  2-->不帅" << endl; 
	cout << "请输入：";
	 
	// cin让用户输入数据 
	cin >> pin;
	
	// 开始判断 (switch只能检测int类型)
	switch(pin)
	{
		case 1:
			cout << "谢谢" << endl;
			break;
			
		case 2:
			cout << "你真没眼光" << endl; 
			break;	
			
		default :
			cout << "你输入的是无效数值!" << endl;
			break;
	}
	system("pause");
	
	return 0;
}

