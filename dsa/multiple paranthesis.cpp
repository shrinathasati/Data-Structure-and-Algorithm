#include<iostream>
using namespace std;
struct stack{
	int top;
	int size;
	int*arr;
	
};
char isempty(struct stack*a){
	if(a->top==-1){
		return 1;
		
	}
	return 0;
}
char isfull(struct stack*a){
	if(a->top==a->size-1){
		return 1;
		
	}
	return 0;
}
int matching(char a,char b){
	if(a=='('&&b==')'){
		return 1;
	}
	if(a=='{'&&b=='}'){
		return 1;
	}
	if(a=='['&&b==']'){
		return 1;
	}
	return 0;
}
struct stack*push(struct stack*p,char val){
	if(isfull(p)){
		cout<<"stack is full"<<endl;
	}
	else{
		p->top++;
		p->arr[p->top]=val;
	}
	
}
char pop(struct stack*p){
	if(isempty(p)){
		cout<<"stack is empty"<<endl;
	}
	else{
		char a=p->arr[p->top];
		p->top--;
		return a; 
	}
	
}
int paranthesis(char exp[100]){
	struct stack *p=new struct stack[50];
	p->size=100;
	p->top=-1;
	char popped_val;
	for(int i=0;exp[i]!='\0';i++)
	{
		//({8}+9
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
		{
			push(p,exp[i]);
		}
		else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
			if(isempty(p)){
				return 0;
			}
			popped_val=pop(p);
			if(!matching(popped_val,exp[i])){
				return 0;
			}

		}
	}
	if(isempty(p)){
		return 1;}
	else{
		return 0;
	}
}
int main(){
	char exp[100];
	cout<<"enter funtion"<<endl;
	cin>>exp;
	if(paranthesis(exp)){
		cout<<"paranthesis is matched"<<endl;
	}
	else{
		cout<<"paranthesis is not matched"<<endl;
	}
}
