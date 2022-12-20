#include<iostream>
using namespace std;
void display(int arr[],int size){
	cout<<"given array is:"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}
int bubble(int arr[],int size){
	int temp;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	int arr[]={1,0,2,7,8,9};
	int size=sizeof(arr)/sizeof(int);
	bubble(arr,size);
	display(arr,size);
	return 0;
}
