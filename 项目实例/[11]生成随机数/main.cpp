#include <iostream>
#include <time.h>// time.h����ʱ��Ϊ����Ҫ�������ļ� 
#include <stdlib.h>// stdlib.h�����������Ҫ�������ļ� 

// ʹ��std�����ռ� 
using namespace std;

int a, b, c;

// ��������������� 
int main()
{
	//��ʼ�����������
	srand((unsigned)time(NULL));
	
	// �û�ȷ���������Χ
	cout << "��������������ֵ:"; 
	cin >> a; 
	cout << "�������������Сֵ:"; 
	cin >> b; 
	
	// �û�ȷ���������������
	cout << "�������������:";
	cin >> c; 
	
	// ��������� 
	for (int i = 0; i < c; i++) 
	{
		int randint = rand() %a + b;
		cout << randint << endl;	
	}
	
	system("pause");
	
	// ����������ֵ 
	return 0;
}

