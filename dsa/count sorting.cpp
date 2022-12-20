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
int maximum(int arr[],int size){

	int x=arr[0];
	for(int i=1;i<size;i++){
		
		if(arr[i]>x){
			x=arr[i];
		}
	}
	return x;
	
}
void count_sorting(int arr[],int size){
	int max=maximum(arr,size);
	int count[max+1];
	int i=0;
	int j=0;
	
	while(i<max+1)
	{
		count[i]=0;
		i++;
		
	}
	while(j<size){
		count[arr[j]]=count[arr[j]]+1;
		j++;
	}
	i=0;
	j=0;
	while(i<max+1){
		if(count[i]>0){
			arr[j]=i;
			count[i]=count[i]-1;
			j++;
		}
		else{
			i++;
		}
	}
	
}
int main(){
	int size;
	cout<<"enter size of array:"<<endl;
	cin>>size;
	int arr[size];
	input(arr,size);
	display(arr,size);
	count_sorting(arr,size);
	display(arr,size);
	return 0;
}
