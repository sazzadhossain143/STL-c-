#include<bits/stdc++.h>
using namespace std;
int main()
{
    //set<int> s={2,8,4,7,6,10,4,2}; //list declaration(ascanding)
    //set<int> s; //list declaration(ascanding)
    //s.insert(10);
    set<int,greater<int>> s={2,8,4,7,6,10,4,2}; //list declaration

    cout<<s.size()<<endl;
    for(auto a:s)cout<<a<<" ";
    cout<<endl;
    cout<<s.size()<<endl;
    //s.find(2);
}
