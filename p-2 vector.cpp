#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v; //vector declaration
    v.push_back(1);// value assin
    v.push_back(20);
    v.push_back(3);
    v.push_back(4);

    vector<int> v1; //vector declaration
    v1.push_back(10);// value assin
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

/* user input vector value
    int n;
    cin>>n;
    for(int i=0; i<n(); i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
*/
/*
    cout<<v[0]<<endl;
    cout<<v.at(0)<<endl;
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.front()<<endl;//first value print
    cout<<v.back()<<endl;// last value print
*/

/// delete value:
/*
    //v.clear(); //vector all value delete kore
    cout<<v.size()<<endl; // vector size

    //v.pop_back(); //last value delete kore
    //v.erase(v.begin()+0); // jekono index r value delete kore
    v.erase(v.begin()+2,v.end()); // delete value (ak index theke onno index projonto)
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //v.empty(); // vector kali naki check kore
*/

/// adding value:
/*
    //v.insert(v.begin(),1);// first index value add
    //v.insert(v.begin()+1,1);// jekono index value add
    v.insert(v.begin()+2,3,1);// joto bar add korte chai
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
*/
///max valu vector: //*max_element (first_index, last_index);
/*
    cout << "\n Max Element = "<< *max_element(a.begin(), a.end());
    cout << "\n Min Element = "<< *min_element(a.begin(), a.end());
*/


/// swaping two vector:
/*
    swap(v,v1);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
**/

/// sort vector:
    sort(v.begin(),v.end());//ascending order
    sort(v.rbegin(),v.rend());//dacending
    sort(v.begin(), v.end(), greater <>());//dacending
    reverse(v.begin(),v.end());//dacending
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

///upper_bound
    ll cnt=upper_bound(v.begin(),v.end(),m)-v.begin()-1;// index 0 thika suru hole
    ll cnt=upper_bound(v.begin(),v.end(),m)-v.begin();
    //vector kono valu r last positon  r next index print kore in vector
    cout<<cnt<<endl; // kono valu r last position/index jante  use korte pari

    auto cnt=upper_bound(v.begin(),v.end(),m); // x thika boro valu ase kina
    cout<<*cnt<<endl; // thakle boro valu  print kore , na thekle 0 print kore

///lower_bound

    ll cnt=lower_bound(v.begin(),v.end(),m)-v.begin();
    // fast position r ager index print kore
    cout<<cnt<<endl;

    auto cnt=lower_bound(v.begin(),v.end(),m);
    // valu thakle oi valu print kore , na thekle oi value thika boro valu print kore , nato 0
    cout<<*cnt<<endl;

    ll cnt=find(v.begin(), v.end(), x)-v.begin(); // valu index ber krte pari

///vector pair:
    /*
    vector<pair<int,int>>m;
    m.push_back({2,1});
    m.push_back({8,2});
    m.push_back({3,3});
    m.push_back({3,4});

    int arr[] = { 5, 20, 10, 40 };
    int arr1[] = { 30, 60, 20, 50 };
    // Entering values in vector of pairs
    for (int i = 0; i < n; i++)
        m.push_back(make_pair(arr[i], arr1[i]));

    for(auto a:m)cout<<a.first<<" "<<a.second<<endl;

    */

///2D vector:
/*
    vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //print 2D vector nested loop
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }

    //print 2D vector itaretor
    for (vector<int> vect1D : vect)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }
        cout << endl;
    }
*/


/// iteration:
/*
    vector<int>::iterator it;
    //it=v.begin()+2;
    //cout<<*it<<endl;
    for( it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
*/
}
