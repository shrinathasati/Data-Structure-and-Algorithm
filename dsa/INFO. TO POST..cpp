#include<iostream>
#include<string.h>
using namespace std;
struct stack{
	int size;
	char *arr;
	int top;
};
char stacktop(struct stack *p){
	return p->arr[p->top];
}
int isfull(struct stack *p){
	if(p->top==p->size-1){
		return 1;
	}
	return 0;
}
int isempty(struct stack *p){
	if(p->top==-1){
		return 1;
	}
	return 0;
}
void push(struct stack *p,char ele){
	if(isfull(p)){
		cout<<"stack is full"<<endl;
		
	}
	else{
		p->top++;
		p->arr[p->top]=ele;
		
		
	}
}
char pop(struct stack *p){
	if(isempty(p)){
		cout<<"stack is empty"<<endl;
		
	}
	else{
		char a=p->arr[p->top];
		p->top--;
		return a;
	}
}
int isoperator(char ch){
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
	{
		return 1;
		
	}
	return 0;
}
int precedence(char ch){
	if(ch=='*'||ch=='/'){
		return 3;
		
	}
    else if(ch=='+'||ch=='-'){
		return 2;
		
	}
	
	return 0;
}
char *infix_to_postfix(char* infix){
	struct stack*p;
	p=new struct stack[5];
	p->size=10;
	p->top=-1;
	p->arr=new char[p->size];
	int i=0;
	int j=0;
	char *postfix=new char[strlen(infix)+1];
	while(infix[i]!='\0'){
		if(!isoperator(infix[i])){
			postfix[j]=infix[i];
			i++;
			j++;
		}
		else{
			if(precedence(infix[i])>precedence(stacktop(p))){
				push(p,infix[i]);
				i++;
			}
			else{
				postfix[j]=pop(p);
				j++;
			}
		}
	}
	while(!isempty(p)){
		postfix[j]=pop(p);
		j++;
	}
	postfix[j]='\0';
	return postfix;
}
int main(){
	char *infix="8+9";

	cout<<"postfix is"<<infix_to_postfix(infix)<<endl;
	
	return 0;
	
}
