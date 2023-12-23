#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    set<int> s(arr,arr+n);
     if(s.size()>1)
     {
        auto it = s.begin();
        advance (it, 1);
        cout<< *it <<endl;
     }
     else
     {
        cout<<"NO"<<endl;
        
     }
return 0;
}