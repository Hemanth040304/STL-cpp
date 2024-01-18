#include<bits.stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;//key:value pair
    //stores data in sorted, sorted will be on keys
    map<int,pair<int,int>>mp1;//one key may have set of pairs
    map<pair<int,int>,int>mp2;//set of keys may have one value
    mp[4]=6;//mp={{4,6}}
    mp.emplace({1,9});
    mp.insert({6,9});
    for(auto it:dic)
    {
        cout<<it.first<<" "<<it.second;
    }
    //mp = {{4,6},{1,9},{6,9}}
    mp2[{2,3}]=10;//set of keys have one value
    cout<<mp[1];//prints 9
    cout<<mp[5];//gives 0 as it is not preasent

    map<char,int>::iterator best
        = max_element(mp.begin(),mp.end(),[] (const pair<char,int>& a, const pair<char,int>& b)->bool{ return a.second < b.second; } );
    // gives the greater element in the map
    auto it=mp.find(6);//gives the position where 3 is found
    auto it=mp.find(5);//position to the end as 5 is not present
    //lower and upper bound works
    auto it=mp.lower_bound(6);
    auto it=mp.upper_bound(5);
    //erase swap begin end size will work
    //we have a multi-map which allows you to store the same key and value
    //pair multiple times
    //unordered_map

    cbegin() – it refers to the first element of the map.
    cend() – it refers to the theoretical element after the last element of the map.
    rbegin() – it points to the last element of the map.
    rend() – it points to the theoretical element before the first element of the map.
    emplace() – to insert an element in the map.
    max_size() – the maximum elements a map can hold.

}
