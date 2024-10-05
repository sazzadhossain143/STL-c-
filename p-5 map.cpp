#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>mp,mp3;  //map key sort hoye jay and key onojay kaj kore
    map<int,string>mp1;
    map<string,string>mp2;
    //   key  , value

    mp.insert({1,5});
    mp.insert({2,10});
    mp2.insert({"sazzad","you"});
    mp1[1]="sazzad"; // aivbe valu deya jay
    mp2["you"]="me";

    // map print
    cout<<mp[1]<<endl;
    cout<<mp1.at(1)<<endl;
    string s="sazzad";
    cout<<mp2[s]<<endl;
    cout<<mp2["you"]<<endl;

    for(auto a:mp2)
    {
        cout<<a.first<<" "<<a.second<<endl;   // key r sort hoye print korbe
    }

    cout<<mp.size()<<endl;

    mp2.clear();
    cout<<mp1.size()<<endl;
    cout<<mp1.empty()<<endl;//yes hole 1 print korbe , No hole 0 print korbe
    cout<<mp2.empty()<<endl;

    //mp.erase(1); // erase(key)
    cout<<mp1.count(1)<<endl; //count(key) key ase naki setha khuje ber kore yes=1 no=0
    //cout<<mp1.find(1)<<endl;

    auto b = mp.lower_bound(3); // key juthi thake tahole seti print korbe ,
                                //na theke key thika boro jeti thakbe seti print,
                                // key juthi sob theke boro hoiya jay end k point korbe garbrj value print korbe
    cout<<(*b).first<<" "<<(*b).second<<endl;

    auto it = mp.upper_bound(1); // key thika boro valu ta print kore
    cout<<(*it).first<<" "<<(*it).second<<endl;

    mp=mp3; // akti map ar sob valu ar akti map e neya jay
    mp.swap(mp3);


    multimap<int,int>m4; // aki key onek bar thakte pare
    m4.insert({1,10});
    m4.insert({2,20});
    m4.insert({2,40});
    m4.insert({1,50});

    auto it1 = m4.begin();
    advance(it1,2); // delet korbe first thika je index dlt korte chai
    m4.erase(it1);

    for(auto a : m4)
    {
        cout<<a.first<<" "<<a.second<<endl;
    }



}
