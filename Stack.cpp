#include<iostream>
#define Max 5
using namespace std;
int d[Max], top;

void push(int data){ // Add data
	if(top+1==Max)
		cout<<"Stack full";
	else
	{
		top++;
		d[top]=data;
	}	
}
void screen(){
	for(int i=0;i<top+1;i++){
		cout<<d[i]<<" ";
	}
	cout<<endl;
}
void pop(){ //  Delete Top
	if(top==-1)
		cout<<"Stack empty";
	else 
	{
		top--;
	}
	screen();
}

int TopView(){ 
	return d[top];
}


int main (){
	top=-1;
	int num;
	while (top!=Max){
	cout<<"Enter Num :";
	cin>>num;
	push(num);
	if(top+1==Max)
		break;
	}
	
	screen();
	pop();
	 
	
	return 0;
}
