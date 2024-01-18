#include<bits/stdc++.h>
using namespace std;

int main(){
	//Syntax
	unordered_set<object_type> variable_name;

	//example
	unordered_set<int> s;
	unordered_set<string> str;

	//to insert an element in the unordered set
	s.insert(1);
	s.insert(2);
	
	//same as insert but it is faster
	s.emplace_back(3);

	//return an iterator pointing to the first element in the unordered set
	s.begin();

	//returns an iterator to the theoretical element after the last element
	s.end();

	//it returns 1 if the element is present in the container otherwise 0
	s.count(2); //returns true

	//deletes all the elements in unordered set
	s.clear();

	//to search an element in the unordered set
	if(s.find(2)!=s.end())
	cout<<"true"<<endl;

	//to delete a single element or elements between a particular range
	s.erase();

	//returns the size of the unordered set
	s.size();

	//to check if the unordered set is empty or not
	s.empty();

	cbegin() – it refers to the first element of the unordered set.

	cend() – it refers to the theoretical element after the last element of the unordered set.

	bucket_size() – gives the total number of elements present in a specific bucket in an unordered set.

	max_size() – the maximum elements an unordered_set can hold.

	max_bucket_count() – to check the maximum number of buckets an unordered set can hold.
}
