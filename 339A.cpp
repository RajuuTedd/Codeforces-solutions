#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
int c1=1;
int c2 = 2;
int c3 = 3;
 int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for (char ch : s) {
        if (ch == '1') {
            count1++;
        } else if (ch == '2') {
            count2++;
        } else if (ch == '3') {
            count3++;
        }
    } 
    cout<< count
return 0;
    
}
