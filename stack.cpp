#include<bits/stdc++.h>
using namespace std;

int main(){
	//Syntax
	stack<object_type> variable_name;

	//example
	stack<int> s;
	stack<string> s;

	//to insert an element in the stack
	s.push(110);
	s.push(220);

	//deletes the last element of the stack
	s.pop();

	//return the element at the top of the stack
	s.top();

	//to insert an element in the stack
	s.emplace(1);
	s.emplace(2);


	//return the number of elements on the stack
	s.size();

	//to check if the stack is empty or not
	s.empty();

	
	stack<int> s;
    for(int i=1;i<=5;i++)
    s.push(i);
    
    cout<<"The elements of the stack are:"<<endl;
    printstack(s);
    
    cout<<"The size of the stack: "<<s.size()<<endl;
    cout<<"The top element of the queue: "<<s.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    s.pop();
    while(!s.empty())
    {
        cout<<s.top()<<"\n";
        s.pop();
    }

    

}
