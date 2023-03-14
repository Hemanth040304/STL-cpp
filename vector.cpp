#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	vector<int>v1;


	v.push_back(1);//1
	v.push_back(5);//1 5
	v.emplace_back(8);//1 5 8 
	// works little bit faster than push back

	v.pop_back();//pop's last element of vector
	//1 5

	v.size();//size of vector

	v.clear();// clears all the elements in vector

	accumulate(v.begin(),v.end(),0);
	//sum of all the elements in vector

	sort(v.begin(),v.end());//sorts the vector

	sort(v.begin(), v.end(), greater<int>());//sorts in descending order

	v.swap(v1);//swaps all elements of two vectors

	reverse(v.begin(),v.end())//reverse the vector

	*max_element(v.begin(),v.end());//max element of vector

	*min_element(v.begin(),v.end());//min element of vector

	assign(1,6);
	// assigns new value to the vector elements by replacing old ones

	vector<int>vet={10,20,30,40};
    vector<int>::iterator it=vet.begin();//it refers to address of that point
    // so if you want value at that point use *
    cout<<*(it)<<endl;
    //it++;
    it=it+2;
    cout<<*(it);

    vector<int>::iterator it=vet.end();//it point the address of end-1
    vector<int>::iterator it=v.rend();//it point the address of second position that means 20 address
    vector<int>::iterator it.rbegin();//it point the address of last value

    cout<<vet[0]<<" "<<vet.at(0)<<endl;//to access the values in vector
    cout<<vet.back()<<endl;//access the last value

    //ways to print the vector
    for(vector<int>::iterator it=vet.begin();it!=vet.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it=vet.begin();it!=vet.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it:vet)
    {
        cout<<it<<" ";
    }
    //erase function
    vet.erase(vet.begin());//it erase the first value
    vet.erase(vet.begin()+1);//it erase second value
    //what if you want erase range of elements
    //{10,20,30,40,50}
    vet.erase(vet.begin()+1,vet.begin()+4);//{10,50}
    //insert function in vector
    vet.insert(vet.begin(),300);//300 will be inserted at the begining
    vet.insert(vet.begin()+1,2,10)//now two 10's will be inserted from second
    vector<int>copy(2,10);//{10,10}
    vet.insert(vet.begin(),copy.begin(),copy.end());
    //to erase the last element
    vet.pop_back();
    //v1={1,2}
    //v2={4,5}
    v1.swap(v2);//v1={4,5} v2={1,2}
    vet.clear();//to erase all the values
    cout<<vet.empty();//gives true if vector is empty
}