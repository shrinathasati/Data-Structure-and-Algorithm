#include<stdio.h>

int insert(int arr[],int size,int element,int capacity,int index){
	if(size>=capacity){
	     printf("Array is full\n");
	     
	}
	else{
		for(int i=size-1;i>=index;i--){
			arr[i+1]=arr[i];
			
		}
		arr[index]=element;
	}
	
	
}
void display(int arr[],int size){
	
	printf("Array is : \n");
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
		
	}
}
int main(){
	int arr[50]={1,3,2,5};
	int size=4;
	int element=45;
	int capacity=50;
	int index=1;// index position define
	display(arr,size);
	printf("\n");
	insert(arr,size,element,capacity,index);
	size+=1;
	display(arr,size);
}
