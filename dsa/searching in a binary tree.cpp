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
void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
struct node *search(struct node *root,int key){
	if(root==NULL){
	    
	    return NULL;
	}
	if(root->data==key){
		return root;
	}
	else if(key<root->data)
	{
		return search(root->left,key);
	}
	else
	{
		return search(root->right,key);
	}
}

int main(){
	struct node *p, *p1, *p2, *p3, *p4, *p5, *p6;
	p=new struct node[5];
	p1=new struct node[5];            
	p2=new struct node[5];
	p3=new struct node[5];
	p4=new struct node[5];
	p5=new struct node[5];
	p6=new struct node[5];
	creative(p,10);
	creative(p1,5);
	creative(p2,15);
	creative(p3,4);
	creative(p4,7);
	creative(p5,14);
	creative(p6,17);
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	p2->left=p5;
	p2->right=p6;
	inorder(p);
	cout<<endl;
    struct node *n=search(p,35);
    if(n!=NULL){
	cout<<"element found :"<<n->data<<endl;
    	
	}
	else{
		cout<<"element not found"<<endl;
	}
	return 0;
	
}

