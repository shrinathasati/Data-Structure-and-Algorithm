#include<iostream>
using namespace std;
void display(int arr[],int size){
	cout<<"given array is:"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}
void insertion_sorting(int arr[],int size){
	int key,j;
	
	
	for(int i=1;i<=size-1;i++){
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		
	}
}
void input(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<"enter element "<<(i+1)<<endl;
		cin>>arr[i];
	}
}

int main(){
	int size;
	cout<<"enter size :"<<endl;
	cin>>size;
	int arr[size];
	input(arr,size);
	cout<<"array before soting:"<<endl;
	
	display(arr,size);
	insertion_sorting(arr,size);
	cout<<"array after soting:"<<endl;
	display(arr,size);
	return 0;
}
