#include<stdio.h>
 
// Data structure to store a binary tree node
struct Node
{
    int key;
    Node *left, *right;
 
    Node(int key)
    {
        this->key = key;
        this->left = this->right =NULL;
    }
};
int max(int a,int b){
	if(a>b){
		return a;
	}
	return b;
}
// Recursive function to calculate the height of a given binary tree
int height(Node* root)
{
    // base case: empty tree has a height of 0
    if (root == NULL) {
        return 0;
    }
 
    // recur for the left and right subtree and consider maximum depth
    return 1 + max(height(root->left), height(root->right));
}
 
int main()
{
    Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
 
    printf("the height of a binary tree is %d.",height(root));
 
    return 0;
}

