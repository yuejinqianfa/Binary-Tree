//#include<stdio.h>
//#define maxSize 127  // Ĭ�ϴ洢��С����������������
//typedef char DataType; // ����Ԫ����������Ϊchar
//typedef struct {
//	DataType data[maxSize];   // �洢����
//	int n;  //��ǰ���ĸ���
//}SqBTree;
//void InitSeqTree(SqBTree* tree)
//{	//���ַ������е�����Ԫ�س�ʼ����ֵ
//	for (int i = 0; i < maxSize; i++)
//	{
//		tree->data[i] = '\0';
//	}
//}
//void CreatSeqTree(SqBTree* tree)
//{
//	int node = 0;
//	tree->n = 0;
//	printf("���ղ�δ��������������н���ֵ��0 ��ʾ�ս�㣬^��ʾ�������:\n");
//	scanf_s("%c", &node);
//	tree->data[tree->n] = node;
//	tree->n++;
//	while (node!='^')
//	{
//		scanf_s("%c", &node);
//		tree->data[tree->n] = node;
//		tree->n++;
//	}
//}
//void PrintSeqTree(SqBTree* tree)
//{
//	for (int i = 0; i < tree->n; i++)
//	{
//		printf("%c", tree->data[i]);
//	}
//}
//
//int main()
//{
//	SqBTree T;
//	InitSeqTree(&T);
//	CreatSeqTree(&T);
//	PrintSeqTree(&T);
//	return 0;
//}