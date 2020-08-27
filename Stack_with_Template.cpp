#include<iostream>
#include<string>
using namespace std;
 
template<typename T>
class Stack {
	private:
		T *Series;
		int top;
		int max;
	public:
		Stack();
		~Stack();
		bool push(T item);
		bool pop();
		bool isEmpty();
		void screen();
};

template<typename T>
Stack<T>::Stack()
{
	top=0;
	max=10;
	Series = new T[max];
}

template<typename T>
Stack<T>::~Stack(){
	delete[] Series;
}

template<typename T>
bool Stack<T>::push(T item){
	if(top>=max)
		return false;
		
	Series[top]=item;
	top++;
	return true;
}

template<typename T>
bool Stack<T>::pop(){
	top--;
} 

template<typename T>
void Stack<T>::screen(){
	for(int i=0;i<top;i++)
		cout<<Series[i]<<" ";
}


int main(){
	 Stack<int> stackInt;
	 Stack<string> stackString;
	 
	 for(int i=0;i<10;i++)	
	 	stackInt.push(i);
	
	stackInt.pop();
	stackInt.pop(); 	
 	stackInt.screen();
	
	return 0;
}
