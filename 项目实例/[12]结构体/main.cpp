// �������ݿ� 
#include <iostream>

// ʹ��std�����ռ� 
using namespace std;

// ����һ���ṹ��
struct People
{
	string name;//���� 
	int ID;  //���֤ 
	int age;    //���� 
}people1 = {"��ͨ", 114514, 30};// �����½ṹ��ʱ��ֱ��ʵ����һ�����󣬵��Ҹ��˲��Ƽ���ô�� 

// ��������������� 
int main()
{
	//ʵ���������ͬʱ���г�ʼ��
	People people2 = {"�ֵ�", 54188, 26};

	//��ʵ���������ٽ��г�ʼ��
	People people3; 
	people3 = {"��ֻ", 250, 22}; 

	//��ʵ��������������������г�ʼ�� 
	People people4;
	people4.name = "������";
	people4.ID = 123456789;
	people4.age = 99;

	// ���������Ϣ
	cout << "--------------------------------------------------------" << endl; 
	cout << "������" << people1.name << endl; 
	cout << "���֤��" << people1.ID << endl; 
	cout << "���䣺" << people1.age << endl; 
	cout << "--------------------------------------------------------" << endl; 
	cout << "������" << people2.name << endl; 
	cout << "���֤��" << people2.ID << endl; 
	cout << "���䣺" << people2.age << endl; 
	cout << "--------------------------------------------------------" << endl; 
	cout << "������" << people3.name << endl; 
	cout << "���֤��" << people3.ID << endl; 
	cout << "���䣺" << people3.age << endl; 
	cout << "--------------------------------------------------------" << endl; 
	cout << "������" << people4.name << endl; 
	cout << "���֤��" << people4.ID << endl; 
	cout << "���䣺" << people4.age << endl; 
	cout << "--------------------------------------------------------" << endl; 
	
	system("pause");
	
	// ����������ֵ 
	return 0;
}

