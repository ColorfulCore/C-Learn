#include <iostream>

using namespace std;

// ����ȫ�ֱ��� 
int a = 1;
int b = 2;
int temp; 

int main()
{
	cout << "--------------------����ǰ--------------------" << endl; 
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	
	// ����ԭ�� 
	temp = a;
	a = b;
	b = temp;
	
	cout << "--------------------������--------------------" << endl; 
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	system("pause");
	
	return 0;
}

