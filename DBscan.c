//#include<stdlib.h>
//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//
//#define maxsize 100
//
////�������Ļ���������������ǰ�����򣬺��򣬲�Σ���Ҷ�����������,������
////�����������ݽṹ
////���������������ָ����
//typedef struct Tree
//{
//	char data;
//	struct tree* lchild;
//	struct tree* rchild;
//}tree;
//
////������������ʼ��
//void treeInit(tree* root)
//{
//	root->data = "";
//	root->rchild = NULL;
//	root->lchild = NULL;
//}
//
////�������Ĵ���
//tree* create(tree* root)
//{
//	char value;
//	scanf_s("%c", &value);
//	if (value == '#')
//	{
//		root = NULL;
//	}
//	else
//	{
//		root = (tree*)malloc(sizeof(tree));
//		root->data = value;
//		root->lchild = create(root->lchild);
//		root->rchild = create(root->rchild);
//	}
//	return root;
//}
//
////�����������Ľ��(����ָ��д��)
//void createNode(tree** node)
//{
//	char p_data;
//	scanf_s("%c", &p_data);
//	if (p_data == '#')
//	{
//		*node = NULL;
//	}
//	else
//	{
//		*node = (tree*)malloc(sizeof(tree));
//		(*node)->data = p_data;
//		createNode(&((*node)->lchild));
//		createNode(&((*node)->rchild));
//	}
//}
//
////�ж϶������Ƿ�Ϊ��
//int tempty(tree* root)
//{
//	if (root->data == "")
//	{
//		printf("������Ϊ��\n");
//		return 0;
//	}
//	else
//	{
//		printf("��������Ϊ��\n");
//		return 1;
//	}
//}
//
////����������ݹ飩
//void porder(tree* root)
//{
//	if (root != NULL)
//	{
//		printf("%c\t", root->data);
//		porder(root->lchild);
//		porder(root->rchild);
//	}
//}
//
////����������ݹ飩
//void morder(tree* root)
//{
//	if (root != NULL)
//	{
//		morder(root->lchild);
//		printf("%c\t", root->data);
//		morder(root->rchild);
//	}
//}
//
////����������ݹ飩
//void torder(tree* root)
//{
//	if (root != NULL)
//	{
//		torder(root->lchild);
//		torder(root->rchild);
//		printf("%c\t", root->data);
//	}
//}
//
////��������ǵݹ�
////�����������Ľ�����ջ�У��������룩ֱ���޷������������ջ���˷���������
//void p_order(tree* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	tree* box[10];//����ջ�洢ÿ�δ�ӡ����λ��
//	int box_top = -1;//ջ���ı��,Ϊ�������±걣��һ��
//	tree* move = root;//�Ӹ��ڵ㿪ʼ��ӡ
//	while (box_top != -1 || move)
//	{
//		while (move)
//		{
//			//��·����ջ���Ҵ�ӡ���
//			printf("%c\t", move->data);
//			box[++box_top] = move;//�ѽ�����������
//			move = move->lchild;//�ƶ����������������
//		}
//		if (box_top != -1)//�ж����������������
//		{
//			move = box[box_top];//��ȡջ��Ԫ��
//			box_top--;//����
//			move = move->rchild;//�ƶ�����������
//		}
//	}
//}
//
////��������ǵݹ�
////�����������������Ҵ洢���ֱ���޷�����Ȼ����ݲ��Ҵ�ӡ����ջ�ٷ���������
//void m_order(tree* root)
//{
//	tree* box[10];//����ջ�����ڴ�Ž���λ��
//	int box_top = -1;//����ջ���ı��
//	tree* move = root;//�����ƶ���ָ��
//	while (box_top != -1 || move)
//	{
//		//�������������
//		while (move)
//		{
//			box[++box_top] = move;
//			move = move->lchild;
//		}
//		if (box_top != -1)
//		{
//			move = box[box_top--];//��ȡջ��Ԫ���һ���
//			printf("%c\t", move->data);
//			move = move->rchild;//�ƶ���������
//		}
//	}
//}
//
////��������ǵݹ�
////�ȷ���������һֱ����ֱ���޷����ʣ���ӡ���Ȼ����ݣ��ٷ������������ڴ�ӡ���ݣ��������������
////������ʱ��������ʹ��Ͳ��ٴ�ӡ��������ݺ��δ�ӡ������
//void t_order(tree* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	tree* box[10];
//	int box_top = -1;
//	tree* move = root;
//	tree* visit = NULL;//���ʱ��
//	while (move)
//	{
//		box[++box_top] = move;
//		move = move->lchild;
//	}
//	while (box_top != -1)
//	{
//		move = box[box_top--];
//		if (move->rchild == NULL || move->rchild == visit)//�жϵ�ǰ�����������Ƿ񱻷���
//		{
//			printf("%c\t", move->data);
//			visit = move;//�ı��ǵ�λ�þ��ǻ��ݵ���һ�������
//		}
//		else
//		{
//			box[++box_top] = move;
//			move = move->rchild;
//			while (move)
//			{
//				box[++box_top] = move;
//				move = move->lchild;
//			}
//		}
//	}
//
//}
//
////��������Ҷ����
//int leaves(tree* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	else if (root->lchild == NULL && root->rchild == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		return leaves(root->lchild) + leaves(root->rchild);
//	}
//}
//
////������ȵĵݹ��㷨
//int deep(tree* root)
//{
//	int lnum, rnum;
//	if (root == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		lnum = deep(root->lchild);
//		rnum = deep(root->rchild);
//		return (lnum > rnum ? lnum : rnum) + 1;
//	}
//}
//
////�����������ĳֵΪ����������ȣ��ݹ飩
//void x_deep(tree* root, char x)
//{
//	int lnum = 0, rnum = 0;
//	if (root == NULL)
//	{
//		printf("�������Ϊ0\n");
//	}
//	if (root->data == x)
//	{
//		printf("%d\n", deep(root));
//	}
//	else
//	{
//		if (root->lchild)
//		{
//			x_deep(root->lchild, x);
//		}
//		if (root->rchild)
//		{
//			x_deep(root->rchild, x);
//		}
//	}
//}
//
////��������ָ�����Ĳ���
//int floor(tree* root, char x)
//{
//	int lnum, rnum, fnum;
//	if (root == NULL)
//	{
//		fnum = 0;
//	}
//	else if (root->data == x)
//	{
//		fnum = 1;
//	}
//	else
//	{
//		lnum = floor(root->lchild, x);
//		rnum = floor(root->rchild, x);
//		if (lnum == 0 && rnum == 0)//����ʧ��
//		{
//			/*printf("���ҽ���\n");*/
//			fnum = 0;
//		}
//		else
//		{
//			fnum = ((lnum > rnum) ? lnum : rnum) + 1;
//		}
//	}
//	return fnum;
//}
//
//
////ͳ�����н�����
//int nodenum(tree* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return(nodenum(root->lchild) + nodenum(root->rchild)) + 1;
//	}
//}
//
////�������BFS
////׼���������������
//typedef struct queue
//{
//	tree* qdata[maxsize];
//	int front;
//	int rear;
//}q;
//
////�Զ��н��г�ʼ��
//void initqueue(q* node)
//{
//	node->front = node->rear = 0;
//}
//
////�ж϶����Ƿ�Ϊ��
//void empty(q* node)
//{
//	if (node->front == node->rear)
//	{
//		printf("����Ϊ��");
//	}
//}
//
////���
//void push(q* node, tree* root)
//{
//	node->qdata[node->rear] = root;
//	node->rear++;
//}
//
////����
//tree* pop(q* node, tree* root)
//{
//	return node->qdata[(++node->front) - 1];
//}
//
////��������α���BFS
//void BFS(tree* root)
//{
//	q* node;
//	node = (q*)malloc(sizeof(q));
//	initqueue(node);
//	if (root != NULL)
//	{
//		push(node, root);
//	}
//	while (node->front != node->rear)
//	{
//		tree* root1 = (tree*)malloc(sizeof(tree));
//		root1 = pop(node, root1);
//		printf("%c\t", root1->data);
//		if (root1->lchild != NULL)
//		{
//			push(node, root1->lchild);
//		}
//		if (root1->rchild != NULL)
//		{
//			push(node, root1->rchild);
//		}
//	}
//}
//
//int main()
//{
//	//���ԣ�12#46###3#5##,ABC##DE#G##F###
//	tree* root = (tree*)malloc(sizeof(tree));
//	treeInit(root);
//	printf("�밴��������Ĵ��������������\n");
//	root = create(root);
//	int temp;
//	while (1)
//	{
//		printf("*****************************�������ۺ�ʵ��****************************\n");
//		printf("*****************************1.�������������**************************\n");
//		printf("*****************************2.�������������**************************\n");
//		printf("*****************************3.�������������**************************\n");
//		printf("*****************************4.����������������ǵݹ飩****************\n");
//		printf("*****************************5.����������������ǵݹ飩****************\n");
//		printf("*****************************6.����������������ǵݹ飩****************\n");
//		printf("*****************************7.��������α�����BFS��*******************\n");
//		printf("*****************************8.���������ȣ��ݹ飩********************\n");
//		printf("*****************************9.��������Ҷ����**************************\n");
//		printf("*****************************10.������������*************************\n");
//		printf("*****************************11.��������ָ��������ڵĲ���*************\n");
//		printf("*****************************12.�ж϶������Ƿ�Ϊ����*******************\n");
//		printf("*****************************13.�����������ĳֵΪ����������ȣ��ݹ飩*\n");
//		printf("*****************************14.�˳�exit*******************************\n");
//		printf("***********************************************************************\n");
//		printf("�������ѡ�");
//		scanf_s("%d", &temp);
//		if (temp == 14)
//		{
//			printf("�����˳�������");
//			break;
//		}
//		switch (temp)
//		{
//		case 1:
//			printf("������ǰ�����(�ݹ�)Ϊ��\n");
//			porder(root);
//			printf("\n");
//			break;
//		case 2:
//			printf("�������������(�ݹ�)Ϊ��\n");
//			morder(root);
//			printf("\n");
//			break;
//		case 3:
//			printf("�������������(�ݹ�)Ϊ��\n");
//			torder(root);
//			printf("\n");
//			break;
//		case 4:
//			printf("������ǰ�����Ϊ��\n");
//			p_order(root);
//			printf("\n");
//			break;
//		case 5:
//			printf("�������������Ϊ��\n");
//			m_order(root);
//			printf("\n");
//			break;
//		case 6:
//			printf("�������������Ϊ��\n");
//			t_order(root);
//			printf("\n");
//			break;
//		case 7:
//			printf("BFS���������������\n");
//			BFS(root);
//			printf("\n");
//			break;
//		case 8:
//			printf("�����������Ϊ%d��\n", deep(root));
//			break;
//		case 9:
//			printf("�������к���%d��Ҷ�ӽ��\n", leaves(root));
//			break;
//		case 10:
//			printf("����������%d�����\n", nodenum(root));
//			break;
//		case 11:
//		{
//			char x;
//			printf("��������Ҫ���ҵĽ�㣺");
//			scanf_s(" %c", &x);//ע�⣺һ��Ҫ��%cǰ�Ӹ�blank���û������ÿգ�
//			printf("��ǰ������ڵĲ���Ϊ��%d\n", floor(root, x));
//		}
//		break;
//		case 12:
//			tempty(root);
//			printf("\n");
//			break;
//		case 13:
//		{
//			char x2;
//			printf("��������Ҫ���ҵĽ�㣺");
//			scanf_s(" %c", &x2);
//			printf("��%cΪ���������Ϊ��", x2);
//			x_deep(root, x2);
//			printf("\n");
//		}
//		break;
//		default:
//			printf("error");
//			break;
//		}
//	}
//	return 0;
//}
