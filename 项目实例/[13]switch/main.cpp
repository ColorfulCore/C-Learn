#include <iostream>
#include <string>

using namespace std;

// �����ַ������� 
int pin;

int main()
{
	cout << "�㿴��˧����" << endl;
	cout << "1-->˧  2-->��˧" << endl; 
	cout << "�����룺";
	 
	// cin���û��������� 
	cin >> pin;
	
	// ��ʼ�ж� (switchֻ�ܼ��int����)
	switch(pin)
	{
		case 1:
			cout << "лл" << endl;
			break;
			
		case 2:
			cout << "����û�۹�" << endl; 
			break;	
			
		default :
			cout << "�����������Ч��ֵ!" << endl;
			break;
	}
	system("pause");
	
	return 0;
}

