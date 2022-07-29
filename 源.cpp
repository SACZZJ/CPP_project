//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//
//// 问题1:下面这5行是干什么用的?
//struct TreeNode {
//	int Element;			//声明元素类型
//	struct TreeNode* Left;	//左孩子
//	struct TreeNode* Right; //右孩子
//};
//
//// 问题2: 简述该函数的功能
//TreeNode* Insert(int X, TreeNode* T) {
//	if (T == NULL) {
//		// 问题：本部分的作用？
//		T = (TreeNode*)malloc(sizeof(struct TreeNode));	//申请新结点
//		if (T == NULL)
//			exit(-1);									//退出
//		else {
//			T->Element = X;
//			T->Left = NULL;
//			T->Right = NULL;
//		}
//	}
//	// 问题3：下面3行的作用？
//	else if (X < T->Element) {
//		T->Left = Insert(X, T->Left);
//	}
//	// 问题4：下面3行的作用？
//	else if (X > T->Element) {
//		T->Right = Insert(X, T->Right);
//	}
//
//	// 返回插入元素的地址
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
////	int seq[10] = { 35,27,19,0,32,12,87,26,5,41 };	// 随便写的输入序列，请写自己的数据序列！
////
////	// 问题5：下面这几句话产生的效果是什么？
////	TreeNode* T = NULL;					//初始化
////	for (int i = 0; i < 10; i++) {
////		T = Insert(seq[i], T);
////	}
////
////
////	// 实现二叉树的先序遍历
////	printf("\n先序遍历输出序列为:\n");
////	TraversePre(T);
////
////
////	// 先编子程序，然后在这里调用子程序，实现二叉树的中序遍历
////	printf("\n中序遍历输出序列为:\n");
////	//TraverseMid(T);
////
////	// 先编子程序，然后在这里调用子程序，实现二叉树的后序遍历
////	printf("\n后序遍历输出序列为:\n");
////	//TraverseBack(T);
////
////	// 提高题（不要求同学必须完成）：
////	// 如果以上程序均已完成,尝试写出Find函数
////	// Find函数实现的功能是：在上述二叉树T中查找某个数X,如果查找成功，则返回X的地址；否则，返回NULL；
////	// 先编子程序，然后在这里调用子程序,输出返回的地址；
////	int X = 19;
////	TreeNode* pos = NULL;
////	// pos = Find(X, T);
////	if (pos != NULL)
////		printf("\n%d的位置为 %p, 对应数据为%d\n", X, pos, pos->Element);
////	else
////		printf("\n%d未找到.\n", X);
////}
//
