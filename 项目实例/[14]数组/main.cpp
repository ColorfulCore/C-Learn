// �������ݿ� 
#include <iostream>

// ʹ��std�����ռ� 
using namespace std;

//���岢��ʼ������
int list_int[] = {1, 2, 3, 4};
char list_char[] = {"1234"};

// ��������������� 
int main()
{
	int max = 4;
	//�������
	cout << "�������������";
	// ����ĵ�һ��Ԫ�ش�0��ʼ����
	for (int i = 0; i < max; i++)
	{
		// ���ʷ�ʽ: ������[������0~max��] 
		cout << list_int[i];	
	}
	
	cout << endl << "�ַ������飨C����ַ����������";
	
	for (int i = 0; i < max; i++)
	{
		cout << list_char[i];	
	}
	cout << endl;
	
	// �޸ķ��ʳ��� 
	max = 10;
	// Խ�����
	cout << "---------------------����Խ�����-------------------------" << endl;
	//�������
	cout << "�������������";
	// ����ĵ�һ��Ԫ�ش�0��ʼ����
	for (int i = 0; i < max; i++)
	{
		cout << list_int[i];	
	}
	
	cout << endl << "�ַ������飨C����ַ����������";
	
	for (int i = 0; i < max; i++)
	{
		cout << list_char[i];	
	}
	cout << endl;
	system("pause");
	
	// ����������ֵ 
	return 0;
}

