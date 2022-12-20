#include<iostream>
using namespace std;
struct node{
	int data;
	struct node*next;
};
void display(struct node*a){
	while(a!=NULL){
	
	cout<<"element is"<<endl;
	cout<<a->data<<endl;
	a=a->next;
	}
	
}
int main(){
	struct node *link1,*link2,*link3,*link4;
	link1=new struct node[5];
	link2=new struct node[5];
	link3=new struct node[5];
	link4=new struct node[5];
	
	link1->data=45;
	link1->next=link2;
	
	link2->data=50;
	link2->next=link3;
	
	link3->data=55;
	link3->next= link4;
	
	link4->data=60;
	link4->next=NULL;
	display(link1);
}
