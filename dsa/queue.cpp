#include<iostream>
using namespace std;
struct queue{
	int size;
	int f;
	int b;
	int *arr;
	
};
void display(struct queue *q){
	for(int i=q->f+1;i<=q->b;i++){
		int j=i+1;
		cout<<"element "<<j<<" is : "<<q->arr[i]<<endl;
	}
}
int isfull(struct queue *q){
	if(q->b==q->size-1){
		cout<<"queue is full"<<endl;
		return 1;
	}
	return 0;
}
int isempty(struct queue *q){
	if(q->b==q->f){
		cout<<"queue is empty"<<endl;
		return 1;
	}
	return 0;
}
int enqueue(struct queue *q){
	if(isfull(q)){
		return 0;
	}
	cout<<"how many elements do you want to enqueue : "<<endl;
	int no_ele;
	cin>>no_ele;
	if(no_ele>q->size){
		cout<<"you can not add more than "<<q->size<<" element."<<endl;
		return 0;
	}
	int ele;
	for (int i=1;i<=no_ele;i++){
	cout<<"enter element "<<i<<": "<<endl;
	cin>>ele;
	q->b=q->b+1;
	q->arr[q->b]=ele;
	}

	
}
int dequeue(struct queue *q){
	if(isempty(q)){
		return 0;
	}
	q->f=q->f+1;
	int a;

	return q->arr[q->f];;
	
}
int main(){
	struct queue *q=new struct queue[5];
	q->size=10;
	q->f=-1;
	q->b=-1;
	q->arr=new int[q->size];	
//	isempty(q);
//	isfull(q);
	enqueue(q);
//	isfull(q);
	cout<<"elements which is dequeue is : "<<dequeue(q)<<endl;
	display(q);
	return 0;
}
