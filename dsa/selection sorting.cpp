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

void selection_sorting(int arr[],int size)
{
	int ind_minimum,temp;
	for(int i=0;i<size-1;i++){
		ind_minimum=i;
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[ind_minimum]){
				ind_minimum=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[ind_minimum];
		arr[ind_minimum]=temp;
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

	selection_sorting(arr,size);
	cout<<"array after soting:"<<endl;
	display(arr,size);
	return 0;
}
