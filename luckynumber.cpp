#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    int count=0;
    scanf("%lld",&t);
    while(t!=0)
    {
    if (t%10!= 4 || t%10!=7) 
    
        ++count;
    
        t = t / 10;
    }
    
    if(count==4||count==7){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
//SAW THE SOLUTION :<