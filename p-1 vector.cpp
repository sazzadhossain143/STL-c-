#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> v;
    set<int> s;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        s.insert(v[i]);
    }
 /*
    sort(v.begin(),v.end());//acending
    reverse(v.begin(),v.end());//dacending
    //sort(v.begin(),v.end(),grater<int>());//dacending
    int sum=0;

    for(int i=0; i<n-1; i++)
    {
        if(v[i]!=v[i-1])sum+=v[i];
        if(i==n-2)sum+=v[i+1];
    }
    //sum+=v[n-1];
    cout <<sum;
    */
    int cnt=0,sum=0;
    for(auto i: s)
    {
        cnt++;
        if(cnt<4)sum+=i;
        else break;
    }
    cout<<sum;
}
