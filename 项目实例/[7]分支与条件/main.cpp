#include <iostream>
#include <string>

using namespace std;

// �����ַ������� 
string pin;

int main()
{
	cout << "�㿴��˧����" << endl;
	cout << "������(Y/N):"; 
	 
	// cin���û��������� 
	cin >> pin;
	
	// ��ʼ�ж� 
	if (pin == "Y")
	{
		cout << "лл" << endl;
	}
	else if (pin == "N")
	{
		cout << "����û�۹�" << endl; 
	}
	else
	{
		cout << "�����������Ч��ֵ!" << endl;
	}
	system("pause");
	
	return 0;
}

