#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> v; //list declaration
    v.push_back(1);// value assin
    v.push_back(20);
    v.push_back(3);
    v.push_front(4);

    list<int> li={10,5,15,4,20}; //list declaration

    //v.pop_front();// fast value delete kore

    for(auto s : v)
    {
        cout<<s<<" ";
    }
    cout<<endl;

    list<int>::iterator it;
    it=li.begin();
    advance(it,3);
    li.insert(it,5);
    for(auto s1 : li)
    {
        cout<<s1<<" ";
    }
    cout<<endl;
}
