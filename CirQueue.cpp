#include <iostream>
#include "CirQueue.h"
using namespace std;

int main()
{
	//定义环形队列
	CirQueue* q;

	//初始化环形队列
	InitQueue(q);

	cout << "进队列之前" << endl;

	//判断队列是否为空
	if (QueueEmpty(q))
		cout << "该队列为空" << endl;
	else
		cout << "该队列不为空" << endl;

	//进队列
	for (int i = 0; i < 4; i++)
	{
		enQueue(q, 'a' + i);
	}

	cout << "进队列之后" << endl;

	//判断队列是否为空
	if (QueueEmpty(q))
		cout << "该队列为空" << endl;
	else
		cout << "该队列不为空" << endl;

	//此时队列已满，继续进队列
	if (enQueue(q, 'e'))
		cout << "进队列成功" << endl;
	else
		cout << "队列已满，进队列失败" << endl;

	//出队列
	char e;
	deQueue(q, e);
	cout << e << endl;
	deQueue(q, e);
	cout << e << endl;

	//进队列
	enQueue(q, 'e');
	enQueue(q, 'f');

	//出队列
	for (int i = 0; i < 4; i++)
	{
		deQueue(q, e);
		cout << e << " ";
	}
	cout << endl;

	cout << "出队列之后" << endl;

	//判断队列是否为空
	if (QueueEmpty(q))
		cout << "该队列为空" << endl;
	else
		cout << "该队列不为空" << endl;

	//销毁环形队列
	DestroyQueue(q);
}