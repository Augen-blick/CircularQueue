#pragma once
#include <iostream>
using namespace std;

const int MaxSize = 5;
typedef char ElemType;

typedef struct
{
	ElemType data[MaxSize];
	int front, rear;
} CirQueue;

void InitQueue(CirQueue*& q);						//��ʼ������
void DestroyQueue(CirQueue*& q);					//���ٶ���
bool QueueEmpty(CirQueue* q);						//�ж϶����Ƿ�Ϊ��
bool enQueue(CirQueue*& q,ElemType e);				//������
bool deQueue(CirQueue*& q, ElemType& e);			//������

void InitQueue(CirQueue*& q)						//��ʼ������
{
	q = (CirQueue*)malloc(sizeof(CirQueue));
	if(q != NULL)
		q->front = q->rear = 0;
}

void DestroyQueue(CirQueue*& q)						//���ٶ���
{
	free(q);
}

bool QueueEmpty(CirQueue* q)						//�ж϶����Ƿ�Ϊ��
{
	return(q->front == q->rear);
}

bool enQueue(CirQueue*& q, ElemType e)				//������
{
	if ((q->rear + 1) % MaxSize == q->front)		//���������
		return false;
	q->rear = (q->rear + 1) % MaxSize;
	q->data[q->rear] = e;
	return true;
}
bool deQueue(CirQueue*& q, ElemType& e)				//������
{
	if (q->front == q->rear)							//���������
		return false;
	q->front = (q->front + 1) % MaxSize;
	e = q->data[q->front];
	return true;
}