/*
insert(): The run time of this method is O(1),
insertion in map is done using make_pair

find(): The run time of this method is O(1), it returns pair of key and value to us.

size(): The run time of this method is O(1)

[] bracket operators: The run time of this method is O(1),
if the key exists, then it returns a reference to the value.
If the key doesn’t exist, then it will do an insertion in the map.*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	//Syntax
	unordered_map<object_type,object_type> variable_name;

	//example
	unordered_map<int,int> mpp;
	unordered_map<string,int> mpp;

	//to insert an element in the map
	mp.insert({1,10});
	mp.insert({2,20});

	//return an iterator pointing to the first element in the map
	mp.begin();

	//returns an iterator to the theoretical element after the last element
	mp.end();

	//deletes all the elements in the map
	mp.clear();

	//to search for an element in the map
	mp.insert({1,10});
	mp.insert({2,20});
	if(mp.find(2)!=mp.end())
	cout<<"true"<<endl;

	//to delete a single element or elements between a particular range
	mp.erase(key);
	mp.erase(iterator position);
	mp.erase(iterator position 1, iterator position 2);

	//returns the number of elements on the map
	mp.size();

	//to check if the map is empty or not
	mp.empty();


	unordered_map < int, int > mp;
	for (int i = 1; i <= 5; i++) {
		mp.insert({ i , i * 10});
	}

	cout << "Elements present in the map: " << endl;
	cout << "Key\tElement" << endl;
	for (auto it = mp.begin(); it != mp.end(); it++) {
		cout << it -> first << "\t" << it -> second << endl;
	}

	int n = 2;
	if (mp.find(2) != mp.end())
	cout << n << " is present in map" << endl;

	mp.erase(mp.begin());
	cout << "Elements after deleting the first element: " << endl;
	cout << "Key\tElement" << endl;
	for (auto it = mp.begin(); it != mp.end(); it++) {
		cout << it -> first << "\t" << it -> second << endl;
	}

	cout << "The size of the map is: " << mp.size() << endl;

	if (mp.empty() == false)
		cout << "The map is not empty " << endl;
	else
		cout << "The map is empty" << endl;
	mp.clear();
	cout << "Size of the set after clearing all the elements: " << mp.size();

	cbegin() – it refers to the first element of the unordered_map.
	cend() – it refers to the theoretical element after the last element of the unordered_map.
	rbegin() – it points to the last element of the unordered_map.
	rend() – it points to the theoretical element before the first element of the unordered_map.
	emplace() – to insert an element in the unordered_map.
	max_size() – the maximum elements a unordered_map can hold.

}
