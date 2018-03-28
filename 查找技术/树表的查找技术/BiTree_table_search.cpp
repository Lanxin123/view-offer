#include "stdafx.h"
#include <iostream>

using namespace std;

struct BiNode
{
	int data;
	BiNode *lchild, *rchild;
};

//二叉搜索树（二叉排序树）
class BiSortTree
{
public:
	BiSortTree(int a[], int n);
	~BiSortTree();
	void InsertBST(BiNode*root, BiNode*s);
	void DeleteBST(BiNode* p,BiNode* f);
	BiNode* SearchBST(BiNode* root, int k);
	BiNode* Getroot();
private:
	BiNode* root;
	void Release(BiNode *root);
};

//前置条件：二叉搜索树不存在
//输入：数组a[n]
//功能：构造一颗数据值为a[n]的二叉排序树
//输出：无
//后置条件：产生一颗二叉搜索树

BiSortTree::BiSortTree(int a[], int n)//构造函数
{
	BiNode*s = new BiNode;
	s->data = a[i];
	s->lchild = NULL;
	s->rchild = NULL;
	InsertBST(root, s);
}

//前置条件：二叉搜索树已经存在
//输入：无
//功能：释放二叉搜索树中所有节点
//输出：无
//后置条件：二叉排序树不存在

BiSortTree::~BiSortTree()
{
	Release(root);
}

//前置条件：空的二叉搜索树
//输入：指向根节点的指针和指向新建节点的指针
//功能：将新建节点插入到二叉搜索树中
//输出：无
//后置条件：产生新的一颗二叉搜索树
void BiSortTree::InsertBST(BiNode *root, BiNode *s)
{
	if (root == NULL) root = s;
	else if (s->data < root->data) InsertBST(root->lchild, s);
			else InsertBST(root->rchild, s);
}

//前置条件：二叉排序树已经存在
//输    入：无
//功    能：获取指向根结点的指针
//输    出：指向根结点的指针
//后置条件：二叉排序树不变
BiNode* BiSortTree::Getroot()
{
	return root;
}

//前置条件：二叉搜索树已经存在
//输入：指向节点f的指针和空指针p
//功能：将节点f的左孩子节点p删除
//输出：无
//后置条件：产生一颗新的二叉搜索树
void BiSortTree::DeleteBST(BiNode *p, BiNode *f)
{
	p = f->lchild;
	BiNode *par;
	BiNode *s;
	if (!p->lchild && !p->rchild)//p为叶子节点
	{
		f->lchild = NULL;
		delete p;
	}
	else {
		if (!p->rchild)
		{
			f->lchild = p->lchild;
			delete p;
		}
		else {
			if (!p->lchild)
			{
				f->lchild = p->rchild;
				delete p;
			}
			else {
				par = p;
				s = p->rchild;
				while (s->lchild != NULL)
				{
					par = s;
					s = s->lchild;
				}
				p->data = s->data;
				if (par == p) par->rchild = s->rchild;
				else par->lchild = s->rchild;
				delete s;
			}
		}
	}
}

//前置条件：二叉搜索树欧孔梅花存在
//输入：无
//功能：释放二叉搜索树的存储空间，析构函数调用
//输出：无
//后置条件：二叉搜索树不存在
void BiSortTree::Release(BiNode *root)
{
	if (root != NULL)
	{
		Release(root->lchild);//释放左子树
		Release(root->rchild);//释放右子树
		delete root;
	}
}

