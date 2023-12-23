#include<bits/stdc++.h>
using namespace std; 
int main()
{
string z;
cin>>z;
int len = z.length();
int a = z[0]-'0';
if(a==9) 
{
z[0]='9';
}
else if (a>4){
    z[0]= ((9-a)+'0');

}

for (int i = 1 ; i< len ; i++)
{
int b = z[i]-'0';
if(b<5 || b==0){
    continue;
}
else{
    z[i]=((9-b)+'0');


}
}
cout<< z << endl;
return 0;
}

// to turn string to integer value add ascii value s[0]= 'something'-'0'l;