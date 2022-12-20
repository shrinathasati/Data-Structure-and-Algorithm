#include<iostream>
using namespace std;
struct node{
	int data;
	struct node*next;
	
};		  

int isfull(struct node*top){
	struct node*ptr=new struct node[5];
	if(ptr==NULL){
		return 1;
		
	}
	else{
		return 0;
		
	}
}

int isempty(struct node*top){

	if(top==NULL){
		return 1;
		
	}
	else{
		return 0;
		
	}
}
struct node* push(struct node*top){
	if(isfull(top)){
		cout<<"stack overflow"<<endl;
	}
	else{
		struct node*p=new struct node[5];
		cout<<"how many elements do you want to push:"<<endl;
		int no_ele;
		cin>>no_ele;
		for(int i=1;i<=no_ele;i++){
			cout<<"enter first element"<<i<<endl;
			cin>>p->data;
		
			p->next=top;
			top=p;
		}
		
		return top;
	}
}
struct node*display(struct node*top)
{
	if(isempty(top)){
		cout<<"stack is empty"<<endl;
		
	}
	else{
		while(top!=NULL){
			cout<<"element is:"<<endl;
			cout<<top->data<<endl;
			top=top->next;
		}
	}
}
int main(){
	struct node *top;
top=new struct node[5];
	top=push(top);
//	top=push(top,55);
//	top=push(top,50);
//	top=push(top,45);
//	top=push(top,40);
//	top=push(top,35);
//	top=push(top,30);
//	top=push(top,25);
//	top=push(top,20);
//	top=push(top,15);
//	top=push(top,10);
//	top=push(top,5);
	
	display(top);	
}                                       
