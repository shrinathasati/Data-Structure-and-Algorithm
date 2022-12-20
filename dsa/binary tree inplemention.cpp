#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void creative(struct node *a,int data){
	struct node *n=a;
	
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	
}
void preorder(struct node *root){
	if(root!=NULL){
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
}
void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
int main(){
	struct node *p, *p1, *p2, *p3;
	p=new struct node[5];
	p1=new struct node[5];
	p2=new struct node[5];
	p3=new struct node[5];
	creative(p,5);
	creative(p1,25);
	creative(p2,15);
	creative(p3,55);
	p->left=p1;
	p->right=p2;
	p1->left=p3;
/*				5	
               / \
			  25  15
			 /
			55	
*/
	cout<<"preoder of tree:"<<endl;
	preorder(p);
	cout<<endl;
	cout<<"postorder of tree:"<<endl;
	postorder(p);
	cout<<endl;
	cout<<"inorder of tree:"<<endl;
	inorder(p);
	return 0;
	
}

