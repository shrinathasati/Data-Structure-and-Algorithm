#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
	int height;
};
int max(int a,int b){
	return (a>b)?a:b;
}
struct node *creative(int data){
	struct node *n=new struct node[5];
	
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	n->height=1;
	
	
}
int getheight(struct node* n){
	if(n==NULL){
		return 0;
	}
	return n->height;
}
int getbalancefactor(struct node *n){
	if(n==NULL){
		return 0;
	}
	return getheight(n->left)-getheight(n->right);
}
struct node* rightrotation(struct node *y){
	struct node* x=y->left;
	struct node* p=x->right;
	x->right=y;
	y->left=p;
	y->height=max(getheight(y->right),getheight(y->left))+1;
	x->height=max(getheight(x->right),getheight(x->left))+1;
	return x;
}
struct node* leftrotation(struct node *m){
	struct node* n=m->right;
	struct node* p=n->left;
	n->left=m;
	m->right=p;
	
	m->height=max(getheight(m->right),getheight(m->left))+1;
	n->height=max(getheight(n->right),getheight(n->left))+1;
	return n;
}
struct node *insert(struct node *root,int key){
	if(root==NULL){
		return creative(key);
		
	}
	if(key<root->data){
		root->left=insert(root->left,key);
	}
	else if(key>root->data){
		root->right=insert(root->right,key);
	}
	root->height=1+max(getheight(root->left),getheight(root->right));
	int bf=getbalancefactor(root);
	if(bf>1&&key<root->left->data){
		return rightrotation(root);
	}
	if(bf<1&&key>root->right->data){
		return leftrotation(root);
	}
	if(bf>1&&key>root->left->data){
		root->left=leftrotation(root->left);
		return rightrotation(root);
	}
	if(bf<1&&key<root->right->data){
		root->right=rightrotation(root->right);
		return leftrotation(root);
	}
	return root;
	
}
int preorder(struct node* p){
	if(p!=NULL){
		cout<<p->data<<" ";
		preorder(p->left);
		preorder(p->right);
	}
}
int main(){
	struct node* root=NULL;
	root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
	preorder(root);
	return 0;
}
