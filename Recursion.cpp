#include<bits/stdc++.h>
using namespace std;
/*
bool f(int i, string &s)
{
    if(i>=s.size()/2)
        return true;
    if(s[i] != s[s.size()-i-1])
        return false;
    return f(i+1, s);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s = "madam";
    cout << f(0,s);
    return 0;
}*/

int sum(int n){
    if(n==0)
      return 0;
    return n+sum(n-1);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("intput.text","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n = 5;
    cout << sum(n);
    return 0;
}