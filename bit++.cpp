#include<iostream>
#include<string>
using namespace std;

int main(){
int n;
cin>>n;
int x=0;
while(n--){
    string s;
    cin>>s;
    for ( int i = 0; i < s.length(); i++)
{
    if (s[i] == '+' && s[i+1]=='+')
    {
        x++;
    }
    else if (s[i]=='-' && s[i+1]=='-')
    {
        x--;
    }
}
}
    cout << x << endl;
    return 0;

}