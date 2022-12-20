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
int isFull(struct queue *q){
	if(q->b==q->size-1){
	//	cout<<"queue is full"<<endl;
		return 1;
	}
	return 0;
}
int isEmpty(struct queue *q){
	if(q->b==q->f){
		//cout<<"queue is empty"<<endl;
		return 1;
	}
	return 0;
}
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->b++;
        q->arr[q->b] = val;
        // printf("Enqued element: %d\n", val);
    }
}
int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->f++;
        a = q->arr[q->f]; 
    }
    return a;
}

int main(){
	struct queue *q=new struct queue[5];
	q->size=10;
	q->f=-1;
	q->b=-1;
	q->arr=new int[q->size];
int v[8]={0,1,2,3,4,5,8,18};
int vis[8]={0,0,0,0,0,0,0};
int p[8][8]={
	
//	 0 1 2 3 4 5 8
    {0,1,1,1,0,0,0,0},//0
    {1,0,1,0,1,0,0,0},//1
    {1,1,0,1,1,0,0,1},//2
	{1,0,1,0,1,0,0,0},//3
    {0,1,1,1,0,1,1,0},//4
    {0,0,0,0,1,0,0,0},//5
    {0,0,0,0,1,0,0,1},//8
	{0,0,1,0,1,0,1,0},//18
};	
	int i=0;
	vis[i]=1;
	enqueue(q,v[i]);
	while(!isEmpty(q)){
		int node=dequeue(q);
		cout<<node<<" ";
		for(int j=0;j<8;j++){
			
			if(p[i][j]==1&&vis[j]==0){
				vis[j]=1;
				enqueue(q,v[j]);
			}
		}
		i++;
		
	}
	return 0;	
}

