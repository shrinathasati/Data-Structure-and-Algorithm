#include<iostream>
using namespace std;
struct node{
	
	int data;
	struct node*next;
	
};
struct node*insert_at_first(struct node*head,int data){
	struct node*ptr=new struct node[5];
	struct node*p=head;
	ptr->data=data;
	
	while(p->next!=head){
		p=p->next;
	}
	ptr->next=head;
	p->next=ptr;
	return ptr;
}
struct node*insert_at_index(struct node*head,int data,int index){
	struct node*ptr=new struct node[5];
	struct node*p=head;
	ptr->data=data;
	int i=0;
	while(i<index-1){
		p=p->next;
		i++;
	}
	ptr->next=p->next;
	p->next=ptr;
	return head;
}
struct node*insert_at_afternode(struct node*head,struct node*p,int data)
{
	struct node*ptr=new struct node[5];
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
}
struct node*insert_at_beforenode(struct node*head,struct node*p,int data){
	struct node*ptr=new struct node[5];
	ptr->data=data;
	struct node*q=head;
	
	while(q->next!=p){
		q=q->next;
	}
	q->next=ptr;
	ptr->next=p;
}
void display(struct node*head){
	struct node*ptr=head;
	
	while(ptr->next!=head){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
		
	}
	cout<<ptr->data<<endl;
}

int main(){
	struct node*head,*second,*third,*fourth;
	head=new struct node [5];
	second=new struct node [5];
	third=new struct node [5];
	fourth=new struct node [5];	
	
	head->data=7;
	head->next=second;
	
	second->data=8;
	second->next=third;

	third->data=11;
	third->next=fourth;
	
	fourth->data=2;
	fourth->next=head;
	cout<<"circular linked list before insertion:"<<endl;
	display(head);
//	head=insert_at_first(head,45);
//	head=insert_at_index(head,45,2);
//	head=insert_at_afternode(head,fourth,52);
	head=insert_at_beforenode(head,third,52);
	cout<<endl;
	cout<<"circular linked list after insertion:"<<endl;
	display(head);
}
