#include<iostream>
using namespace std;
struct CircularQueue{
	int size;
	int f;
	int b;
	int *arr;
};
int enqueue(struct CircularQueue *q,int val){
	if((q->b+1)%q->size==q->f){
		cout<<"queue is full "<<endl;
		return 0;
	}
	q->b=(q->b+1)%q->size;
	q->arr[q->b]=val;
	
}
int dequeue(struct CircularQueue *q){
	if(q->b==q->f){
		cout<<"queue is empty "<<endl;
		return 0;
	}
	q->f=(q->f+1)%q->size;
	return q->arr[q->f];

}
int main(){
	struct CircularQueue *q=new struct CircularQueue;
	q->size=4;
	q->f=q->b=0;
	q->arr=new int[q->size];
	enqueue(q,5);
	enqueue(q,5);
	enqueue(q,5);
	cout<<"element which is dequeued : "<<dequeue(q)<<endl;
	cout<<"element which is dequeued : "<<dequeue(q)<<endl;
	cout<<"element which is dequeued : "<<dequeue(q)<<endl;
	cout<<"element which is dequeued : "<<dequeue(q)<<endl;
	enqueue(q,7);
	cout<<"element which is dequeued : "<<dequeue(q)<<endl;
	return 0;
}
