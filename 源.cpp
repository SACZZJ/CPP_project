//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//
//// ����1:������5���Ǹ�ʲô�õ�?
//struct TreeNode {
//	int Element;			//����Ԫ������
//	struct TreeNode* Left;	//����
//	struct TreeNode* Right; //�Һ���
//};
//
//// ����2: �����ú����Ĺ���
//TreeNode* Insert(int X, TreeNode* T) {
//	if (T == NULL) {
//		// ���⣺�����ֵ����ã�
//		T = (TreeNode*)malloc(sizeof(struct TreeNode));	//�����½��
//		if (T == NULL)
//			exit(-1);									//�˳�
//		else {
//			T->Element = X;
//			T->Left = NULL;
//			T->Right = NULL;
//		}
//	}
//	// ����3������3�е����ã�
//	else if (X < T->Element) {
//		T->Left = Insert(X, T->Left);
//	}
//	// ����4������3�е����ã�
//	else if (X > T->Element) {
//		T->Right = Insert(X, T->Right);
//	}
//
//	// ���ز���Ԫ�صĵ�ַ
//	return T;
//}
//void TraversePre(TreeNode* T) {
//	if (T == NULL)
//		return;
//	else {
//		printf("%d  ", T->Element);
//		TraversePre(T->Left);
//		TraversePre(T->Right);
//	}
//}
//
//
////int main(void)
////{
////	int seq[10] = { 35,27,19,0,32,12,87,26,5,41 };	// ���д���������У���д�Լ����������У�
////
////	// ����5�������⼸�仰������Ч����ʲô��
////	TreeNode* T = NULL;					//��ʼ��
////	for (int i = 0; i < 10; i++) {
////		T = Insert(seq[i], T);
////	}
////
////
////	// ʵ�ֶ��������������
////	printf("\n��������������Ϊ:\n");
////	TraversePre(T);
////
////
////	// �ȱ��ӳ���Ȼ������������ӳ���ʵ�ֶ��������������
////	printf("\n��������������Ϊ:\n");
////	//TraverseMid(T);
////
////	// �ȱ��ӳ���Ȼ������������ӳ���ʵ�ֶ������ĺ������
////	printf("\n��������������Ϊ:\n");
////	//TraverseBack(T);
////
////	// ����⣨��Ҫ��ͬѧ������ɣ���
////	// ������ϳ���������,����д��Find����
////	// Find����ʵ�ֵĹ����ǣ�������������T�в���ĳ����X,������ҳɹ����򷵻�X�ĵ�ַ�����򣬷���NULL��
////	// �ȱ��ӳ���Ȼ������������ӳ���,������صĵ�ַ��
////	int X = 19;
////	TreeNode* pos = NULL;
////	// pos = Find(X, T);
////	if (pos != NULL)
////		printf("\n%d��λ��Ϊ %p, ��Ӧ����Ϊ%d\n", X, pos, pos->Element);
////	else
////		printf("\n%dδ�ҵ�.\n", X);
////}
//
