#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[n];
    cin>>n;
    cin>>arr[n];
    int i;
      for(i=1;i<=n-1;i++)
      {
    if(arr[i]+arr[i+1]==arr[0]+arr[1])
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
      }
    return 0;
}