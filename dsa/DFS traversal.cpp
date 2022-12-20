#include<iostream>
using namespace std;

int DFS(int value){
	int a=value;
	cout<<a<<" ";
}
int main(){
int visited[8]={0,0,0,0,0,0,0};
int v[8]={0,1,2,3,4,5,8,18};
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
	
	DFS(v[0]);
for(int i=0;i<8;i++)
{	visited[i]=1;
	for(int j=0;j<8;j++){
		if(p[i][j]==1&&visited[j]==0){
			visited[j]=1;
			DFS(v[j]);
		}
	}
		
}
}

