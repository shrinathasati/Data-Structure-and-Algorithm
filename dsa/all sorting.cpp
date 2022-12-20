#include<iostream>
using namespace std;
void input(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<"enter element "<<(i+1)<<endl;
		cin>>arr[i];
	}
}

void display(int arr[],int size){
	cout<<"given array is:"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}
void bubble_sorting(int arr[],int size){
	int temp;
	 for(int i=0;i<size-1;i++){
	 	for(int j=0;j<size-1;j++){
	 		if(arr[j]>arr[j+1])
	 		{
	 			temp=arr[j];
	 			arr[j]=arr[j+1];
	 			arr[j+1]=temp;
		    }
		 }
	 }
}
void insertion_sorting(int arr[],int size){
	int key;
	for(int i=1;i<=size-1;i++){
		key=arr[i];
		int j=i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main(){
	int size;
	cout<<"enter size of array:"<<endl;
	cin>>size;
	int arr[size];
	input(arr,size);
	display(arr,size);	
	//bubble_sorting(arr,size);
	//display(arr,size);
	insertion_sorting(arr,size);
	display(arr,size);
	return 0;
}
