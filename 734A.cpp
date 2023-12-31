#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    int countA=0;
    int countB=0;
    string s;
        cin>>s;
    
         // for (char &c : s) {
       // c = std::toupper(c);
        //  }
    for (int j = 0; j < s.length(); j++)
    
    {
       if(s[j]== 'A') {
        countA++;/* code */
    }
    else if(s[j]=='D')
    {
        countB++;
    }
 }

if(countA>countB){
    cout<<"Anton"<<endl;
}
else if (countA<countB){
    cout<<"Danik"<<endl;

}
else if (countA==countB){
    cout<<"Friendship"<<endl;
}
return 0;
}
