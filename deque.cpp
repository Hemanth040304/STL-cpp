#include<bits/stdc++.h>
using namespace std;

int main(){
	//Syntax
	deque<object_type> variable_name;

	//example
	deque<int> dq;
	deque<string> dq;

	//to insert an element at the end of the deque
	dq.push_back(110);
	dq.push_back(220);

	//to insert an element at the front of the deque
	dq.push_front(110);
	dq.push_front(220);

	//deletes the last element of the deque
	dq.pop_back();

	//deletes the front element of the deque
	dq.pop_front();


	//it gives a reference to the first element of the deque.
	dq.front();

	//it gives a reference to the last element of the deque
	dq.back();

	//return the number of elements on the deque
	dq.size();

	//to check if the deque is empty or not
	dq.empty();


	deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_front(50);
    
    cout<<"The elements in the deque are: ";
    printdeque(dq);
    
    cout<<"The size of the deque is: "<<dq.size()<<endl;
    cout<<"The first element in the deque: "<<dq.front()<<endl;
    cout<<"Deleting the first element"<<endl;
    dq.pop_front();
    cout<<"The last element of the deque: "<<dq.back()<<endl;
    cout<<"Deleting the last element"<<endl;
    dq.pop_back();
    for(auto it = dq.begin() ; it != dq.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;


    begin() – it refers to the first element of the deque.
	end() – it refers to the theoretical element after the last element of the deque.
	cbegin() – it refers to the first element of the deque.
	cend() – it refers to the theoretical element after the last element of the deque
	rbegin() – it points to the last element of the deque.
	rend() – it points to the theoretical element before the first element of the deque.
	emplace_front() – to insert an element at the front of the deque.
	emplace_back() – to insert an element at the end of the deque.
	max_size() – the maximum elements a deque can hold.
	clear() – to delete all the elements of the deque.
	erase() – to delete a single element or elements between a particular range.

}
