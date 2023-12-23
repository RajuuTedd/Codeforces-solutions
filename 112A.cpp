#include<bits/stdc++.h>
using namespace std; 
int main()
{
string a;
string b;
cin>> a;
cin>> b;
std::transform(a.begin(), a.end(), a.begin(), ::tolower);
std::transform(b.begin(), b.end(), b.begin(), ::tolower);
 int  result = a.compare(b);
 if(a<b)
    cout<< " -1 "<<endl;
 else if (a >b)
    cout << " 1 "<< endl; 
 else
cout<< " 0 "<<endl;
 
 return 0;
}