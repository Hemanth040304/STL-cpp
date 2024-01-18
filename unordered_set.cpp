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

	unordered_set < int > s;
	for (int i = 1; i <= 10; i++) {
		s.insert(i);
	}
	cout << "Elements present in the unordered set: ";


	for (auto it = s.begin(); it != s.end(); it++) {
		cout << * it << " ";
	}
	cout << endl;


	int n = 2;
	if (s.find(2) != s.end())
		cout << n << " is present in unordered set" << endl;


	s.erase(s.begin());
	cout << "Elements after deleting the first element: ";


	for (auto it = s.begin(); it != s.end(); it++) {
		cout << * it << " ";
	}
	cout << endl;

	cout << "The size of the unordered set is: " << s.size() << endl;


	if (s.empty() == false)
		cout << "The unordered set is not empty " << endl;
	else
		cout << "The unordered set is empty" << endl;

	
	s.clear();
	cout << "Size of the unordered set after clearing all the elements: " << s.size();
}
