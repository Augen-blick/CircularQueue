#include <iostream>
#include "CirQueue.h"
using namespace std;

int main()
{
	//���廷�ζ���
	CirQueue* q;

	//��ʼ�����ζ���
	InitQueue(q);

	cout << "������֮ǰ" << endl;

	//�ж϶����Ƿ�Ϊ��
	if (QueueEmpty(q))
		cout << "�ö���Ϊ��" << endl;
	else
		cout << "�ö��в�Ϊ��" << endl;

	//������
	for (int i = 0; i < 4; i++)
	{
		enQueue(q, 'a' + i);
	}

	cout << "������֮��" << endl;

	//�ж϶����Ƿ�Ϊ��
	if (QueueEmpty(q))
		cout << "�ö���Ϊ��" << endl;
	else
		cout << "�ö��в�Ϊ��" << endl;

	//��ʱ��������������������
	if (enQueue(q, 'e'))
		cout << "�����гɹ�" << endl;
	else
		cout << "����������������ʧ��" << endl;

	//������
	char e;
	deQueue(q, e);
	cout << e << endl;
	deQueue(q, e);
	cout << e << endl;

	//������
	enQueue(q, 'e');
	enQueue(q, 'f');

	//������
	for (int i = 0; i < 4; i++)
	{
		deQueue(q, e);
		cout << e << " ";
	}
	cout << endl;

	cout << "������֮��" << endl;

	//�ж϶����Ƿ�Ϊ��
	if (QueueEmpty(q))
		cout << "�ö���Ϊ��" << endl;
	else
		cout << "�ö��в�Ϊ��" << endl;

	//���ٻ��ζ���
	DestroyQueue(q);
}