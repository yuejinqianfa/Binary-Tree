#include<stdio.h>
#include<stdlib.h>
#define maxsize 50
typedef char DataType;
typedef struct BinaryTreeNode
{
	DataType data;	// ��ǰ�ڵ�ֵ��
	struct BinaryTreeNode* left;	// ָ��ǰ�ڵ�����
	struct BinaryTreeNode* right;	// ָ��ǰ�ڵ��Һ���
}BTNode;
BTNode* CreateNode(int x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	node->data = x;
	node->left = NULL;
	node->right = NULL;
	return node;
}
typedef struct sqstack
{
	BTNode* data[maxsize];
	int top;//ջ��ָ��
}sqstack;
bool initstack(sqstack* s)//��ʼ��
{
	s->top = -1;
	return true;
}
//ǰ�����
void preorder(BTNode* T)
{
	sqstack s;
	initstack(&s);
	BTNode* p = T;
	do
	{
		while (p!=NULL)
		{
			printf("%c ", p->data);
			if (p->right != NULL)s.data[++s.top] = p->right;
			p = p->left;
		}
		if (s.top!=-1)p= s.data[s.top--];
	} while (p!=NULL||s.top!=-1);
}

//�������
void inorder(BTNode* T)
{
	sqstack s;
	initstack(&s);
	BTNode* p = T;
	do
	{
		while (p != NULL)
		{
			s.data[++s.top] = p;
			p = p->left;
		}
		if (s.top != -1)
		{
			p = s.data[s.top--];
			printf("%c ", p->data);
			p = p->right;
		}
	} while (p != NULL || s.top != -1);
}

//�������
void postorder(BTNode* T)
{
	sqstack s;
	initstack(&s);
	BTNode* p = T;
	BTNode* pre = NULL;
	do
	{
		while (p != NULL)
		{
			s.data[++s.top] = p;
			p = p->left;
		}
		if (s.top != -1)
		{
			p = s.data[s.top];
			if (p->right != NULL && p->right != pre)
			{
				p = p->right;
			}
			else
			{
				printf("%c ", p->data);
				pre = p;
				p = NULL;
				s.top--;
			}
		}

	} while (p != NULL|| s.top != -1);
}	
int main()
{
	//������
	BTNode* a = CreateNode('a');
	BTNode* b = CreateNode('b');
	BTNode* c = CreateNode('c');
	BTNode* d = CreateNode('d');
	BTNode* e = CreateNode('e');
	BTNode* f = CreateNode('f');
	BTNode* g = CreateNode('g');
	BTNode* h = CreateNode('h');
	BTNode* i = CreateNode('i');
	BTNode* j = CreateNode('j');
	BTNode* k = CreateNode('k');
	BTNode* l = CreateNode('l');
	a->left = b;
	a->right = i;
	b->left = c;
	b->right = f;
	c->left = d;
	c->right = e;
	f->left = g;
	f->right = h;
	i->left = j;
	i->right = l;
	j->left = k;
	printf("ǰ�����\n");
	preorder(a);
	printf("\n�������\n");
	inorder(a);
	printf("\n�������\n");
	postorder(a);
	return 0;
}