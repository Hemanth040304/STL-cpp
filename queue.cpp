#include<bits/stdc++.h>
using namespace std;

int main(){
	//Syntax
	queue<object_type> variable_name;

	//example
	queue<int> q;
	queue<string> q;

	//to insert an element in the queue
	q.push(110);
	q.push(220);

	//deletes the first element of the queue
	q.pop();

	//returns a reference to the first element of the queue
	q.front();

	//returns a reference to the last element of the queue
	q.back();

	//to insert an element in the queue
	q.emplace(1);
	q.emplace(2);

	//returns the number of elements on the queue
	q.size();

	//to check if the queue is empty or not
	q.empty();


	queue<int> q;
    for(int i=1;i<=5;i++)
    q.push(i);
    
    cout<<"The elements of the queue are:"<<endl;
    printqueue(q);
    
    cout<<"The size of the queue: "<<q.size()<<endl;
    cout<<"The front element of the queue: "<<q.front()<<endl;
    cout<<"The last element of the queue: "<<q.back()<<endl;
    cout<<"Pop the front element: "<<endl;
    q.pop();
    while(!q.empty())
    {
        cout<<q.front()<<"\n";
        q.pop();
    }


}
