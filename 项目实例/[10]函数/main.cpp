#include <iostream>

using namespace std;

// ������� 
int num1 = 1;
int num2 = 2;

// �������� voidΪ�������ͣ���Ϊ�޷���ֵ����Ҫ�з���ֵӦʹ�ö�Ӧ���ݶ����ͣ����磺int char..... 
void function1();
int function2(int a);

// ��������������� 
int main()
{
	cout << "--------------------�ӹ�ǰ--------------------" << endl; 
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	
	// ʹ�ú��� 
	function1();
	
	cout << "--------------------�ӹ���--------------------" << endl; 
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	
	// ʹ�ú��� 
	cout << "--------------------num1�ӹ���--------------------" << endl; 
	cout << "num1��10��" << function2(num1) << endl; 
	cout << "����δ�ı䣡" << endl; 
	cout << "num1 : " << num1 << endl;
	cout << "--------------------num2�ӹ���--------------------" << endl; 
	num2 = function2(num2);
	cout << "num2��10��" << num2 << endl;
	cout << "�����Ѹı䣡" << endl;
	cout << "num2 : " << num2 << endl;
	return 0;
}

// ���亯������ 
void function1()
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

int function2(int a)
{
	// a����10��Ҳ��д��a = a + 10; 
	a += 10;
	// ����ֵ�����ؼӹ���ı���ֵ 
	return a;
}

