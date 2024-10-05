#include<bits/stdc++.h>
#define ll long long int
#define vp vector<pair<int,int>>
#define pb push_back
using namespace std;
//
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr)/ sizeof(arr[0]);

    cout<<n<<endl;

///sort:
    //sort(arr, arr + n);
    //sort(arr, arr + n, greater<>());//descending order
    //sort(arr + 2, arr + n);// Sort the elements which lies in the range of 2 to (n-1)

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // Find the maximum element: *max_element (first_index, last_index);
    cout<<"\n Max Element = " << *max_element(arr, arr + n);
    cout<<"\n Max Element = " << *min_element(arr, arr + n)<<endl;

/// swap:
    // array container declaration
    array<int, 4> myarray1{ 1, 2, 3, 4 };
    array<int, 4> myarray2{ 3, 5, 7, 9 };

        // using swap() function to swap elements of arrays
    myarray1.swap(myarray2);

        // printing the first array
    cout<<"myarray1 = ";
    for(auto it=myarray1.begin(); it<myarray1.end(); ++it)
        cout<<*it<<" ";

///array empty:
    if (myarray1.empty()) {
        cout << "True";
    }
    else {
        cout << "False";
    }
/// array size:
    array<int, 5> myarray{ 1, 2, 3, 4, 5 };
    cout << myarray.max_size();
}
