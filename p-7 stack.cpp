#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fri for(int i=0; i<n; i++)
#define frj for(int j=0; j<m; j++)
#define vp vector<pair<int,int>>
#define srt(v) sort(v.begin(),v.end())
#define srt(s) sort(s.begin(),s.end())
#define rev(v) reverse(v.begin(),v.end())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
//https://codeforces.com/problemset/problem/1374/C

void solve()
{
    int n; cin>>n;
    stack<char>s;
    int ans=0;
    fri{
        char c; cin>>c;
        if(c==')'){
            if(s.empty())ans++;
            else s.pop();
        }
        else s.push(c);

    }
    cout<<ans<<endl;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        solve();


    }



    return 0;

}


