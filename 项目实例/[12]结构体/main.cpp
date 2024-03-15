// 导入数据库 
#include <iostream>

// 使用std命名空间 
using namespace std;

// 创建一个结构体
struct People
{
	string name;//姓名 
	int ID;  //身份证 
	int age;    //年龄 
}people1 = {"南通", 114514, 30};// 创建新结构体时可直接实例化一个对象，但我个人不推荐这么做 

// 主函数，程序入口 
int main()
{
	//实例化对象的同时进行初始化
	People people2 = {"钢蛋", 54188, 26};

	//先实例化对象，再进行初始化
	People people3; 
	people3 = {"若只", 250, 22}; 

	//先实例化对象，再逐个参数进行初始化 
	People people4;
	people4.name = "草泥马";
	people4.ID = 123456789;
	people4.age = 99;

	// 输出对象信息
	cout << "--------------------------------------------------------" << endl; 
	cout << "姓名：" << people1.name << endl; 
	cout << "身份证：" << people1.ID << endl; 
	cout << "年龄：" << people1.age << endl; 
	cout << "--------------------------------------------------------" << endl; 
	cout << "姓名：" << people2.name << endl; 
	cout << "身份证：" << people2.ID << endl; 
	cout << "年龄：" << people2.age << endl; 
	cout << "--------------------------------------------------------" << endl; 
	cout << "姓名：" << people3.name << endl; 
	cout << "身份证：" << people3.ID << endl; 
	cout << "年龄：" << people3.age << endl; 
	cout << "--------------------------------------------------------" << endl; 
	cout << "姓名：" << people4.name << endl; 
	cout << "身份证：" << people4.ID << endl; 
	cout << "年龄：" << people4.age << endl; 
	cout << "--------------------------------------------------------" << endl; 
	
	system("pause");
	
	// 主函数返回值 
	return 0;
}

